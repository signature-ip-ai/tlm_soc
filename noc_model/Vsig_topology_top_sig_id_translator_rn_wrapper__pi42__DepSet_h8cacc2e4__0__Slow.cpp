// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_wrapper__pi42.h"

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi42___ctor_var_reset(Vsig_topology_top_sig_id_translator_rn_wrapper__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi42___ctor_var_reset\n"); );
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
    vlSelf->__PVT__ic_rx_req_lkly_shared = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9591490119050145361ull);
    vlSelf->__PVT__ic_rx_req_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10379654436714780255ull);
    vlSelf->__PVT__ic_rx_req_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18156255455434784704ull);
    vlSelf->__PVT__ic_rx_req_expcompack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4703236615110897551ull);
    vlSelf->__PVT__tx_snp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17692015695977157657ull);
    vlSelf->__PVT__tx_snp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2273237233846184466ull);
    vlSelf->__PVT__tx_snp_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15672756177962464957ull);
    vlSelf->__PVT__tx_snp_txnid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4077414954976996057ull);
    vlSelf->__PVT__vc0_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3971686118301021010ull);
    vlSelf->__PVT__vc0_rx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16633450762204075446ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8638758416788597766ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12364437059197336991ull);
    vlSelf->__PVT__vc1_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14656621017388532550ull);
    vlSelf->__PVT__vc1_rx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3079772483458571841ull);
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
    vlSelf->__PVT__id_translator_full_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17777691839719015227ull);
    vlSelf->__PVT__id_translator_full_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4335561153357397077ull);
    vlSelf->__PVT__id_translator_req_snp_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6978048267312632202ull);
    vlSelf->__PVT__id_translator_hs_pending_txn_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10678390388340462109ull);
    vlSelf->__PVT__id_translator_hs_pending_txn_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9786047516829092547ull);
    vlSelf->__PVT__id_translator_req_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12499710416353431209ull);
    vlSelf->__PVT__id_translator_snp_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16865210711919753740ull);
    vlSelf->__PVT__vc0_rx_rsp_v_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4760479860701649225ull);
    vlSelf->__PVT__vc1_rx_rsp_v_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8052079580564590175ull);
    vlSelf->__PVT__vc0_rx_dat_v_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17256247642502255659ull);
    vlSelf->__PVT__vc1_rx_dat_v_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12460109602048224258ull);
    vlSelf->__PVT__vc0_rx_rsp_v_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17567537007448112709ull);
    vlSelf->__PVT__vc1_rx_rsp_v_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17141546182393665736ull);
    vlSelf->__PVT__vc0_rx_dat_v_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16695236415368018788ull);
    vlSelf->__PVT__vc1_rx_dat_v_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10257110054692692350ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn_req = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13987166874678628523ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn_snp = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6037163699206420322ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_to_hn_req = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8285354940694623571ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_to_hn_snp = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1795406109003149646ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_to_hn_req = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15350039902636780352ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_to_hn_snp = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13586076459508776349ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_to_hn_req = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16400874188551332101ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_to_hn_snp = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10437595441450931ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_to_hn_req = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17962515852399512209ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_to_hn_snp = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13325195843599199435ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_to_hn_req = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18226016262008536111ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_to_hn_snp = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15040207779396097515ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn_muxed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18052712380732433717ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_to_hn_muxed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15732269341351628222ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_to_hn_muxed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 627264186395905611ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_to_hn_muxed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13760195753214727419ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_to_hn_muxed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3034801400629603414ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_to_hn_muxed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17655843242949877289ull);
}
