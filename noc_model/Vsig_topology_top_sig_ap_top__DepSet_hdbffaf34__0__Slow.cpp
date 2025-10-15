// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ap_top.h"

VL_ATTR_COLD void Vsig_topology_top_sig_ap_top___ctor_var_reset(Vsig_topology_top_sig_ap_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_ap_top___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__resetn_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16428992625228223244ull);
    vlSelf->__PVT__valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550966959580451262ull);
    vlSelf->__PVT__atom_op_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14815449415981953086ull);
    vlSelf->__PVT__atom_addr_i = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 5196867826460760961ull);
    vlSelf->__PVT__atom_size_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1614248495627974406ull);
    vlSelf->__PVT__atom_is_big_endian_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16613246239333852749ull);
    vlSelf->__PVT__atom_be_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5576412840530224203ull);
    vlSelf->__PVT__addr_is_aligned_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3981969165672858159ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_i, __VscopeHash, 5902796130906426658ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_i, __VscopeHash, 16830430132081561429ull);
    vlSelf->__PVT__dat_txn_en_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4298247275846093556ull);
    vlSelf->__PVT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2487444212943817592ull);
    vlSelf->__PVT__ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6223107695775132031ull);
    vlSelf->__PVT__dat_init_wr_flag_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11024343149341724920ull);
    vlSelf->__PVT__dat_res_wr_flag_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3795956372782955513ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_res_o, __VscopeHash, 15597002275697658829ull);
    vlSelf->__PVT__bytemask_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7747075925117027493ull);
    vlSelf->__PVT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10854271546065566948ull);
    vlSelf->__PVT__atom_addr_upper_shift_decoder = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10592988073177136545ull);
    vlSelf->__PVT__atom_addr_bit_offset_decoder = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17949411159807171765ull);
    vlSelf->__PVT__atom_size_decoder = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5706883488979157837ull);
    vlSelf->__PVT__atom_is_big_endian_decoder = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1358984724847602541ull);
    vlSelf->__PVT__alu_control_decoder = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17696414683283094271ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__bytemask_decoder[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12152287359800515044ull);
    }
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_decoder, __VscopeHash, 6546992838893098102ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_decoder, __VscopeHash, 7120623140917019907ull);
    vlSelf->__PVT__atom_addr_upper_shift_adder = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7321690887254586584ull);
    vlSelf->__PVT__atom_addr_bit_offset_adder = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13162005085593763016ull);
    vlSelf->__PVT__atom_is_big_endian_adder = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1989198891973013235ull);
    vlSelf->__PVT__alu_control_adder = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12239268953665774039ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_adder, __VscopeHash, 15849412951852165168ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_adder, __VscopeHash, 18247177442171232767ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_res_int, __VscopeHash, 9412330349758455201ull);
    vlSelf->__PVT__dat_res_wr_flag_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9477329136612371637ull);
    vlSelf->__PVT__alu_control_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11353787903848556835ull);
    vlSelf->__PVT__atom_addr_upper_shift_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12991114637269363575ull);
    vlSelf->__PVT__atom_addr_bit_offset_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15313138322595312292ull);
    vlSelf->__PVT__atom_is_big_endian_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10169179819045902685ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_reg, __VscopeHash, 15189165225244578201ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_reg, __VscopeHash, 1829941083604378763ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__bitmask_nxt[__Vi0], __VscopeHash, 5754025516720251834ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__bitmask_reg[__Vi0], __VscopeHash, 5870277859209844023ull);
    }
    vlSelf->__PVT__align_operand_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8577153038708153866ull);
    vlSelf->__PVT__align_operand_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11355764938952087820ull);
    vlSelf->__PVT__bitmask_first_set_bit_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 808745036281827061ull);
    vlSelf->__PVT__bitmask_first_set_bit_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17579191831222437732ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__Vfunc_replicator__0__Vfuncout, __VscopeHash, 18048965437032764595ull);
    vlSelf->__Vfunc_replicator__0__bytemask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12132603397399460811ull);
    vlSelf->__Vfunc_replicator__0__unnamedblk2__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__Vfunc_replicator__1__Vfuncout, __VscopeHash, 7985190519756716517ull);
    vlSelf->__Vfunc_replicator__1__bytemask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10280211204283712441ull);
    vlSelf->__Vfunc_replicator__1__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_get_first_set_bit_idx__2__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13995989689138822084ull);
    vlSelf->__Vfunc_get_first_set_bit_idx__2__bitmask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16962493164253356503ull);
    vlSelf->__Vfunc_clogb2__3__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2611266521390821087ull);
    vlSelf->__Vfunc_clogb2__3__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14990748420416056359ull);
    vlSelf->__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0;
    vlSelf->__Vdly__alu_control_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13718567914511640512ull);
    vlSelf->__Vdly__atom_addr_upper_shift_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13444373560203631967ull);
    vlSelf->__Vdly__atom_addr_bit_offset_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2079044465620264ull);
    vlSelf->__Vdly__atom_is_big_endian_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12930603603501129079ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__Vdly__dat_init_reg, __VscopeHash, 15176982406707199460ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__Vdly__dat_txn_reg, __VscopeHash, 13395679854059088946ull);
    vlSelf->__Vdly__align_operand_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11513662230377308047ull);
    vlSelf->__Vdly__bitmask_first_set_bit_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1570080671372849377ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__VdlyVal__bitmask_reg__v0, __VscopeHash, 15307852199227471134ull);
    vlSelf->__VdlySet__bitmask_reg__v0 = 0;
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__VdlyVal__bitmask_reg__v1, __VscopeHash, 3961446770376797437ull);
    vlSelf->__VdlySet__bitmask_reg__v2 = 0;
}
