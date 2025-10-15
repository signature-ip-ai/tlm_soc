// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cachedir_ctrlr__pi16.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wrdata_cache = 0U;
    vlSelfRef.__PVT__newseed_value = 6U;
    vlSelfRef.__PVT__load_newseed = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__1(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_rden_cache = ((IData)(vlSelfRef.__PVT__wren_cache_cohc_or_dirc) 
                                         & ((IData)(vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc) 
                                            == (IData)(vlSelfRef.__PVT__index_cache)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__2(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_cmdvalid_nxt = ((IData)(vlSelfRef.__PVT__set_cm_cmdvalid) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clr_cm_cmdvalid))) 
                                            && (IData)(vlSelfRef.__PVT__cm_cmdvalid)));
    vlSelfRef.__PVT__cm_cmdvalid_evict_nxt = ((IData)(vlSelfRef.__PVT__set_cm_cmdvalid_evict) 
                                              || ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__clr_cm_cmdvalid_evict))) 
                                                  && (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___ctor_var_reset(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__wren_cmq_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14891505571427714330ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_ph4, __VscopeHash, 11751809096008860029ull);
    vlSelf->__PVT__cmd_addr_ph3 = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 15266753109267875081ull);
    vlSelf->__PVT__cmd_addr_ph3_has_matchingentry_incmq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12518608944154213720ull);
    vlSelf->__PVT__block_fetch_cohc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14509791292380692131ull);
    vlSelf->__PVT__rden_dircache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14095547107425382334ull);
    vlSelf->__PVT__rden_dircache_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12115579494320390871ull);
    vlSelf->__PVT__cache_index_rd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15337702231590617463ull);
    vlSelf->__PVT__cache_tag_rd = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 4371487220638945348ull);
    vlSelf->__PVT__validity_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5612729674850203181ull);
    vlSelf->__PVT__cachehit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2349583359423476893ull);
    vlSelf->__PVT__rddata_cache = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5959125425215884480ull);
    vlSelf->__PVT__rdout_tag_value = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 13519040157002029984ull);
    vlSelf->__PVT__evict_this_one = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2648936200774576425ull);
    vlSelf->__PVT__evict_this_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18054005477542234120ull);
    vlSelf->__PVT__in_pendingq = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15506577802146835165ull);
    vlSelf->__PVT__wren_cache_vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10107894629028056029ull);
    vlSelf->__PVT__wrdata_cache = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8550234609285485005ull);
    vlSelf->__PVT__cache_index_wr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14592956125562570934ull);
    vlSelf->__PVT__cache_tag_wr = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 13680107875819807950ull);
    vlSelf->__PVT__wrvalid_dirc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10979752630291603306ull);
    vlSelf->__PVT__wren_cache_cohc_or_dirc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11335812194555609403ull);
    vlSelf->__PVT__cache_index_wr_cohc_or_dirc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7554872119381538796ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cm_cmd, __VscopeHash, 17134410543704108858ull);
    vlSelf->__PVT__cm_cmdvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10935687010101470423ull);
    vlSelf->__PVT__clr_cm_cmdvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13771873550443589026ull);
    vlSelf->__PVT__cm_cmdvalid_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6304623208976443716ull);
    VL_SCOPED_RAND_RESET_W(84, vlSelf->__PVT__evict_details, __VscopeHash, 7740052233367362936ull);
    vlSelf->__PVT__clr_cm_cmdvalid_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17550963073695834682ull);
    vlSelf->__PVT__dirc_canwrite_tocache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8528095151192250366ull);
    vlSelf->__PVT__fiforoom_atlst4_cmq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12010265418786223346ull);
    vlSelf->__PVT__full_cmqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7697748521783914580ull);
    vlSelf->__PVT__cmqhas_1room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5212482075423727568ull);
    vlSelf->__PVT__cmqhas_2room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11328495738407190341ull);
    vlSelf->__PVT__cmqhas_3room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1792089563180104986ull);
    vlSelf->__PVT__en_blocking_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487398171900918568ull);
    vlSelf->__PVT__index_cache_eviction = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16098368761919786461ull);
    vlSelf->__PVT__dirc_init_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3987835445286343248ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__rddata_cmqfifo, __VscopeHash, 10298325960569328505ull);
    vlSelf->__PVT__fifo_cache_miss_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1439007579863186370ull);
    vlSelf->__PVT__empty_cmqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3713632110359467310ull);
    vlSelf->__PVT__rden_cmqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5858923239054224638ull);
    vlSelf->__PVT__cacheproc_state = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6440906851080844802ull);
    vlSelf->__PVT__cacheproc_state_nxt = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6224087279853596793ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cm_cmd_nxt, __VscopeHash, 6368008480160658970ull);
    vlSelf->__PVT__cm_cmdvalid_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17327753505720311900ull);
    vlSelf->__PVT__set_cm_cmdvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13030838565188876313ull);
    vlSelf->__PVT__rden_dircache_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 867569837041486749ull);
    vlSelf->__PVT__cm_cmdvalid_evict_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17219291864936932357ull);
    vlSelf->__PVT__set_cm_cmdvalid_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11681859238250403873ull);
    vlSelf->__PVT__addr_cache = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 6428468475350407892ull);
    vlSelf->__PVT__cm_cmd_addr_rd = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 13005455454008251326ull);
    vlSelf->__PVT__evict_this_one_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12742375680486027718ull);
    vlSelf->__PVT__evict_this_cycle_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18159023865794759403ull);
    vlSelf->__PVT__evicted_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4723133012972724197ull);
    vlSelf->__PVT__evicted_data_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13770604317373862704ull);
    vlSelf->__PVT__rdout_tag_stored = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15819121977025660472ull);
    vlSelf->__PVT__rdout_tag_stored_nxt = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2415904033107527316ull);
    vlSelf->__PVT__tag_cache = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2080682243865194547ull);
    vlSelf->__PVT__byteoffset_cache = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15216659686631066473ull);
    vlSelf->__PVT__sel_wren_noevict_decode = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 909655121828529157ull);
    vlSelf->__PVT__sel_wren_noevict_stored = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1806669385171638506ull);
    vlSelf->__PVT__sel_wren_noevict_stored_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17286121733215856856ull);
    vlSelf->__PVT__eviction_in_progress = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3914888160807783588ull);
    vlSelf->__PVT__eviction_in_progress_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14182612270617957800ull);
    vlSelf->__PVT__evict_random_decode = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2992643531228351671ull);
    vlSelf->__PVT__evict_random_decode_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17354391426953616337ull);
    vlSelf->__PVT__evict_random_plru = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5567247065559350193ull);
    vlSelf->__PVT__evict_member_winner = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6751341113070083594ull);
    vlSelf->__PVT__memadd_reloc_cmpct_rd = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 2018973597820385704ull);
    vlSelf->__PVT__memadd_reloc_cmpct_wr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16275148519514168036ull);
    vlSelf->__PVT__memadd_evict_wr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17775795946561542972ull);
    vlSelf->__PVT__count_evict = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16941406148158184401ull);
    vlSelf->__PVT__count_evict_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8291584087679747241ull);
    vlSelf->__PVT__block_fetch_cohc_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10729058008400679054ull);
    vlSelf->__PVT__wren_cmqfifo_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15172233985375294884ull);
    vlSelf->__PVT__in_pendingq_stored = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3943576797047790231ull);
    vlSelf->__PVT__in_pendingq_stored_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2677832536884395809ull);
    vlSelf->__PVT__notin_pendingq_stored = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9929010869903659011ull);
    vlSelf->__PVT__advance_lfsr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4589037715601396862ull);
    vlSelf->__PVT__notin_pendingq_shifted = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3325362591188544109ull);
    vlSelf->__PVT__n_p_s_w = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8168490542224019986ull);
    vlSelf->__PVT__got_an_eviction_winner = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10701364816032877517ull);
    vlSelf->__PVT__lfsr_flops = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5122359633213538598ull);
    vlSelf->__PVT__lfsr_flops_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10058933660251791122ull);
    vlSelf->__PVT__newseed_value = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2969324424827912808ull);
    vlSelf->__PVT__en_blocking_reqcmdq_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14849425196542431710ull);
    vlSelf->__PVT__index_cache = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17098312946397995872ull);
    vlSelf->__PVT__cache_index_rd_nxt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1158335733396958741ull);
    vlSelf->__PVT__itis_a_match_cmqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6653801209770439380ull);
    vlSelf->__PVT__first_cycle_in_evictend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6732375218661684488ull);
    vlSelf->__PVT__first_cycle_in_evictend_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3607350238247419298ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__fifo_wrdata_ph4, __VscopeHash, 18097261555257534828ull);
    vlSelf->__PVT__memberset_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9320690440415317075ull);
    vlSelf->__PVT__invalidity_stored = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 254139352547837758ull);
    vlSelf->__PVT__validity_stored = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6811241622018998454ull);
    vlSelf->__PVT__validity_stored_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10890126506556454438ull);
    vlSelf->__PVT__cachehit_stored = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4404546875728236669ull);
    vlSelf->__PVT__cachehit_stored_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8959615134649330770ull);
    vlSelf->__PVT__validity_in_ph4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1261018968730775643ull);
    vlSelf->__PVT__cachehit_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2382926337869223183ull);
    vlSelf->__PVT__evicted_cl_inidle_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13737308293575004329ull);
    vlSelf->__PVT__wrvalid_cmd_dirc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17824649271381471415ull);
    vlSelf->__PVT__wren_cache_cmd_vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16951667942919216112ull);
    vlSelf->__PVT__dirc_init_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13508660435899320424ull);
    vlSelf->__PVT__dirc_init_index_wr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18084993923858854855ull);
    vlSelf->__PVT__load_newseed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6223202925585285322ull);
    vlSelf->__PVT__block_rden_cache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1469184080368325219ull);
    vlSelf->__PVT__index_cmd_ph4 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1419386840100525934ull);
    vlSelf->__PVT__index_cache_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2517818136671720862ull);
    vlSelf->__PVT__empty_cmqfifo_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16467449590624022564ull);
    vlSelf->__Vcellinp__cmqfifo_0__match_data_in = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 12044094135088703488ull);
    vlSelf->__Vdly__cacheproc_state = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12212308754178939204ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__Vdly__cm_cmd, __VscopeHash, 10890258303220921167ull);
    vlSelf->__Vdly__cm_cmdvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11431337333559536921ull);
    vlSelf->__Vdly__cm_cmdvalid_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9247068365935719713ull);
    vlSelf->__Vdly__rden_dircache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1775256489093944123ull);
    vlSelf->__Vdly__evict_this_one = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17743080187667275115ull);
    vlSelf->__Vdly__evict_this_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5904240353191555731ull);
    vlSelf->__Vdly__evicted_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13671462124138076170ull);
    vlSelf->__Vdly__rdout_tag_stored = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 7056292678718191562ull);
    vlSelf->__Vdly__eviction_in_progress = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6992576432981134206ull);
    vlSelf->__Vdly__count_evict = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13440299059134125360ull);
    vlSelf->__Vdly__evict_random_decode = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13935132261825868981ull);
    vlSelf->__Vdly__in_pendingq_stored = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15160923285879604109ull);
    vlSelf->__Vdly__block_fetch_cohc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14013205424684214679ull);
    vlSelf->__Vdly__en_blocking_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8870724848655531346ull);
    vlSelf->__Vdly__first_cycle_in_evictend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2809173162179936608ull);
    vlSelf->__Vdly__sel_wren_noevict_stored = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2522079342920433216ull);
    vlSelf->__Vdly__validity_stored = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12662361721993804710ull);
    vlSelf->__Vdly__cachehit_stored = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14449791414542788334ull);
    vlSelf->__Vdly__validity_in_ph4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2931017661611691289ull);
    vlSelf->__Vdly__cachehit_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11089776281584698635ull);
    vlSelf->__Vdly__empty_cmqfifo_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5408063304565364219ull);
    vlSelf->__Vdly__index_cache_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17805327166977170405ull);
    vlSelf->__Vdly__cache_index_rd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18079365084023165965ull);
    vlSelf->__Vdly__lfsr_flops = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13377373564616424126ull);
}
