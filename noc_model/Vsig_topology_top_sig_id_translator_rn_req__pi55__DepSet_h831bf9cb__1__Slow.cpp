// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_req__pi55.h"

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi55___ctor_var_reset(Vsig_topology_top_sig_id_translator_rn_req__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi55___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__tx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2747297334556920702ull);
    vlSelf->__PVT__tx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1336872673651741080ull);
    vlSelf->__PVT__tx_rsp_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1840634888362332302ull);
    vlSelf->__PVT__tx_rsp_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18413498414578026162ull);
    vlSelf->__PVT__tx_rsp_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2647194244193697424ull);
    vlSelf->__PVT__tx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10230828256482590494ull);
    vlSelf->__PVT__tx_dat_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9409818687272564606ull);
    vlSelf->__PVT__tx_dat_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6478233242765452913ull);
    vlSelf->__PVT__tx_dat_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15269487314227434881ull);
    vlSelf->__PVT__ic_rx_req_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12553187514232022100ull);
    vlSelf->__PVT__ic_rx_req_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10379654436714780255ull);
    vlSelf->__PVT__ic_rx_req_lkly_shared = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9591490119050145361ull);
    vlSelf->__PVT__ic_rx_req_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18156255455434784704ull);
    vlSelf->__PVT__ic_rx_req_expcompack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4703236615110897551ull);
    vlSelf->__PVT__vc0_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3971686118301021010ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8638758416788597766ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12364437059197336991ull);
    vlSelf->__PVT__vc1_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14656621017388532550ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14340119240101131659ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2442109393445920530ull);
    vlSelf->__PVT__vc0_rx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11348919215571002080ull);
    vlSelf->__PVT__vc0_rx_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17575625163452640630ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7673534438012336129ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9121176229297233863ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13803892076329687828ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16724105472290879617ull);
    vlSelf->__PVT__vc1_rx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10084399847514638597ull);
    vlSelf->__PVT__vc1_rx_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17609014715899986201ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 695509224416565905ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13615556910726986192ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16086952640368813078ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7696150905062115265ull);
    vlSelf->__PVT__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4073664312429058754ull);
    vlSelf->__PVT__id_translator_hs_pending_txn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12924654799560797390ull);
    vlSelf->__PVT__id_translator_req_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12499710416353431209ull);
    vlSelf->__PVT__unmasked_tx_rsp_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8129431409266614362ull);
    vlSelf->__PVT__unmasked_tx_dat_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13610135483061997584ull);
    vlSelf->__PVT__expcompack_from_rsp_dbid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13093320800164482106ull);
    vlSelf->__PVT__expcompack_from_dat_dbid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 286886890424732042ull);
    vlSelf->__PVT__writezero_from_rsp_dbid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2136385566630426230ull);
    vlSelf->__PVT__timeout_cback_wrdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13755035526330091823ull);
    vlSelf->__PVT__is_vc0_rx_COMPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 678701207588473306ull);
    vlSelf->__PVT__is_vc1_rx_COMPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6170613805742258274ull);
    vlSelf->__PVT__is_vc0_rx_NCBWRDATACOMPACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4803457809209088572ull);
    vlSelf->__PVT__is_vc1_rx_NCBWRDATACOMPACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10593925094280608184ull);
    VL_SCOPED_RAND_RESET_W(1080, vlSelf->__PVT__id_buffer, __VscopeHash, 5149900860303124661ull);
    VL_SCOPED_RAND_RESET_W(1080, vlSelf->__PVT__id_buffer_nxt, __VscopeHash, 2890166502963185102ull);
    vlSelf->__PVT__wren_id_buffer = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 14582782863542166835ull);
    vlSelf->__PVT__rsp_txnid_entry_match = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 11953558808041498762ull);
    vlSelf->__PVT__dat_txnid_entry_match = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15165141751523294915ull);
    vlSelf->__PVT__empty_valid_buffer = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15327870279615766740ull);
    vlSelf->__PVT__id_buffer_valid = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 4355402353215462464ull);
    vlSelf->__PVT__id_buffer_valid_nxt = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 4088958002169096336ull);
    vlSelf->__PVT__id_translator_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9008992663785856423ull);
    vlSelf->__PVT__assert_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18182980786680410429ull);
    vlSelf->__PVT__req_is_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13413435982308844443ull);
    vlSelf->__PVT__req_is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9988316960675127139ull);
    vlSelf->__PVT__req_is_write_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15346564849649074225ull);
    vlSelf->__PVT__req_is_write_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17172778233912673800ull);
    vlSelf->__PVT__req_is_dataless = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11924463540555345038ull);
    vlSelf->__PVT__req_is_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4063131443802188808ull);
    vlSelf->__PVT__req_is_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14008382201138356965ull);
    vlSelf->__PVT__tx_rsp_is_compcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5768898227808373641ull);
    vlSelf->__PVT__initial_hn_rsp_cntr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15214039771638399514ull);
    vlSelf->__PVT__initial_rn_rsp_cntr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13137021070578286878ull);
    vlSelf->__PVT__tx_actual_rsp_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17950057107045856793ull);
    vlSelf->__PVT__tx_actual_dat_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17169687088578699948ull);
    vlSelf->__Vconcswap_1_h4457ac4e__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2922826143835428313ull);
    vlSelf->__Vconcswap_1_h4464b48c__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8676549045436034597ull);
    vlSelf->__PVT__unused_signal_block__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4460017475698396108ull);
    vlSelf->__PVT__unused_signal_block__DOT__unused_signal_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5946587349157120734ull);
    vlSelf->__Vfunc_clog2_index__0__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3025129249112608151ull);
    vlSelf->__Vfunc_clog2_index__0__set_bit_location = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16917771762519455598ull);
    vlSelf->__Vfunc_clog2_index__0__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_clog2_index__1__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17907098098315329491ull);
    vlSelf->__Vfunc_clog2_index__1__set_bit_location = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16845444203991592607ull);
    vlSelf->__Vfunc_clog2_index__1__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__2__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17077453975987562741ull);
    vlSelf->__Vfunc_all_bits_sum_up__2__set_bit_location = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 8185618804488848814ull);
    vlSelf->__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__2__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 687009292934309562ull);
    VL_SCOPED_RAND_RESET_W(1080, vlSelf->__Vdly__id_buffer, __VscopeHash, 15931877679181556011ull);
    vlSelf->__Vdly__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1505740637921644095ull);
    vlSelf->__Vdly__unused_signal_block__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3030336470289689506ull);
}
