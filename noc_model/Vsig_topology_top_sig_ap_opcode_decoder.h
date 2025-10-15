// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_AP_OPCODE_DECODER_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_AP_OPCODE_DECODER_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_ap_opcode_decoder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__resetn_i,0,0);
        VL_IN8(__PVT__valid_i,0,0);
        VL_IN8(__PVT__atom_op_i,6,0);
        VL_IN8(__PVT__atom_size_i,2,0);
        VL_IN8(__PVT__atom_is_big_endian_i,0,0);
        VL_IN8(__PVT__dat_txn_en_i,1,0);
        VL_IN8(__PVT__addr_is_aligned_i,0,0);
        VL_IN8(__PVT__ready_i,0,0);
        VL_OUT8(__PVT__ready_o,0,0);
        VL_OUT8(__PVT__dat_init_wr_flag_o,0,0);
        VL_OUT8(__PVT__dat_res_wr_flag_o,0,0);
        VL_OUT8(__PVT__valid_o,0,0);
        VL_OUT8(__PVT__alu_control_o,3,0);
        VL_OUT8(__PVT__atom_size_to_adder_o,2,0);
        VL_OUT8(__PVT__atom_is_big_endian_to_adder_o,0,0);
        VL_OUT8(__PVT__atom_addr_upper_shift_o,0,0);
        VL_OUT8(__PVT__atom_addr_bit_offset_o,6,0);
        VL_IN8(__PVT__dat_res_wr_flag_i,0,0);
        CData/*2:0*/ __PVT__state;
        CData/*2:0*/ __PVT__state_nxt;
        CData/*5:0*/ __PVT__size_in_bytes;
        CData/*4:0*/ __PVT__half_of_size_in_bytes;
        CData/*5:0*/ __PVT__half_size_plus_unset_bits;
        CData/*4:0*/ __PVT__num_unset_bits;
        CData/*6:0*/ __PVT__atom_op_reg;
        CData/*6:0*/ __PVT__atom_op_reg_nxt;
        CData/*6:0*/ __PVT__atom_addr_bit_offset;
        CData/*6:0*/ __PVT__atom_addr_bit_offset_nxt;
        CData/*0:0*/ __PVT__atom_addr_upper_shift;
        CData/*0:0*/ __PVT__atom_addr_upper_shift_nxt;
        CData/*2:0*/ __PVT__atom_size_reg;
        CData/*2:0*/ __PVT__atom_size_reg_nxt;
        CData/*0:0*/ __PVT__atom_is_big_endian_reg;
        CData/*0:0*/ __PVT__atom_is_big_endian_reg_nxt;
        CData/*0:0*/ __PVT__dat_res_wr_flag_reg;
        CData/*0:0*/ __PVT__dat_res_wr_flag_reg_nxt;
        CData/*0:0*/ __PVT__dat_init_wr_flag_reg;
        CData/*0:0*/ __PVT__dat_init_wr_flag_reg_nxt;
        CData/*0:0*/ __PVT__addr_is_aligned_nxt;
        CData/*0:0*/ __PVT__addr_is_aligned_reg;
        CData/*4:0*/ __Vconcswap_1_h9fcad676__0;
        CData/*4:0*/ __Vfunc_clogb2__0__Vfuncout;
        CData/*2:0*/ __Vdly__state;
        CData/*0:0*/ __Vdly__dat_init_wr_flag_reg;
        CData/*0:0*/ __Vdly__dat_res_wr_flag_reg;
        CData/*0:0*/ __Vdly__atom_addr_upper_shift;
        CData/*6:0*/ __Vdly__atom_addr_bit_offset;
        CData/*2:0*/ __Vdly__atom_size_reg;
        CData/*0:0*/ __Vdly__atom_is_big_endian_reg;
        CData/*6:0*/ __Vdly__atom_op_reg;
        CData/*0:0*/ __Vdly__addr_is_aligned_reg;
        VL_IN(__PVT__atom_be_i,31,0);
        VL_INW(__PVT__dat_init_i,127,0,4);
        VL_INW(__PVT__dat_txn_i,255,0,8);
        VL_OUTW(__PVT__dat_res_o,127,0,4);
        VL_OUT(__PVT__bytemask_to_HN_o,31,0);
        VL_OUTW(__PVT__dat_init_to_adder_o,127,0,4);
        VL_OUTW(__PVT__dat_txn_to_adder_o,255,0,8);
        VL_INW(__PVT__dat_res_from_adder_i,127,0,4);
        IData/*31:0*/ __PVT__atom_be_reg;
        IData/*31:0*/ __PVT__atom_be_reg_nxt;
        VlWide<4>/*127:0*/ __PVT__dat_init_reg;
        VlWide<4>/*127:0*/ __PVT__dat_init_reg_nxt;
    };
    struct {
        VlWide<8>/*255:0*/ __PVT__dat_txn_reg;
        VlWide<8>/*255:0*/ __PVT__dat_txn_reg_nxt;
        VlWide<4>/*127:0*/ __PVT__dat_res_reg;
        VlWide<4>/*127:0*/ __PVT__dat_res_reg_nxt;
        IData/*31:0*/ __PVT__bytemask_to_HN_reg;
        IData/*31:0*/ __PVT__bytemask_to_HN_reg_nxt;
        IData/*31:0*/ __PVT__bytemask_unaligned_nxt;
        IData/*31:0*/ __PVT__bytemask_unaligned_reg;
        IData/*31:0*/ __PVT__bytemask_aligned_nxt;
        IData/*31:0*/ __PVT__bytemask_aligned_reg;
        IData/*27:0*/ __Vconcswap_1_h9e6ed4fe__0;
        IData/*31:0*/ __Vfunc_clogb2__0__set_bit_location;
        IData/*31:0*/ __Vfunc_clogb2__0__unnamedblk1__DOT__i;
        IData/*27:0*/ __Vfunc_clogb2__0__temp_overflow;
        IData/*31:0*/ __Vfunc_clogb2__0__multiply_set_bit;
        VlWide<4>/*127:0*/ __Vdly__dat_init_reg;
        VlWide<8>/*255:0*/ __Vdly__dat_txn_reg;
        VlWide<4>/*127:0*/ __Vdly__dat_res_reg;
        IData/*31:0*/ __Vdly__atom_be_reg;
        IData/*31:0*/ __Vdly__bytemask_to_HN_reg;
        IData/*31:0*/ __Vdly__bytemask_to_HN_o;
        IData/*31:0*/ __Vdly__bytemask_unaligned_reg;
        IData/*31:0*/ __Vdly__bytemask_aligned_reg;
        VL_IN64(__PVT__atom_addr_i,51,0);
        QData/*51:0*/ __PVT__atom_addr_reg;
        QData/*51:0*/ __PVT__atom_addr_reg_nxt;
        QData/*32:0*/ __PVT__set_bit_temp;
        QData/*51:0*/ __Vdly__atom_addr_reg;
        VL_OUT(__PVT__bytemask_to_adder_o[2],31,0);
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_ap_opcode_decoder(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_ap_opcode_decoder();
    VL_UNCOPYABLE(Vsig_topology_top_sig_ap_opcode_decoder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
