// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_compdata__pi20.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi20___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0(Vsig_topology_top_sig_chi_xmt_compdata__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi20___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(0x7dU, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 0U);
    VL_ASSIGNSEL_WI(151,9,0x89U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 0U);
    VL_ASSIGNSEL_WI(151,4,0x93U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 0U);
    VL_ASSIGNSEL_WI(680,7,0x3aU, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 0U);
    VL_ASSIGNSEL_WI(680,23,0x51U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 0U);
    VL_ASSIGNSEL_WI(73,7,0x42U, vlSelfRef.__PVT__respbody_compdata_s, 0U);
    vlSelfRef.__PVT__rden_which16bytes_1st = 0xfU;
    vlSelfRef.__PVT__rden_which16bytes_2nd = 0xfU;
    vlSelfRef.__PVT__comp_opcode = 4U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi20___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__3(Vsig_topology_top_sig_chi_xmt_compdata__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi20___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WQ(151,53,0x48U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    VL_CONCAT_QIQ(53,1,52, (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa0U)), 
                                  VL_CONCAT_QQI(52,46,6, 
                                                (0x3fffffffffffULL 
                                                 & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_outstandq_to_compdata, 6U, 46)), 0U)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi20___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__3(Vsig_topology_top_sig_chi_xmt_compdata__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi20___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_compdata_nodeid_valid = 0U;
    if (((IData)(vlSelfRef.__PVT__ic_TX_DATFLITV) | (IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_compdata_out))) {
        vlSelfRef.__PVT__o_xmt_compdata_nodeid_valid = 1U;
    }
    vlSelfRef.__PVT__o_xmt_compdata_linear_nodeid = vlSelfRef.__PVT__comp_tgt_nodeid_linear;
    vlSelfRef.__PVT__tgt_nodeid_grid = vlSelfRef.__PVT__i_xmt_compdata_full_node_id;
    vlSelfRef.__PVT__comp_tgt_nodeid = ((IData)(vlSelfRef.__PVT__origreq_rdwr_nosnp)
                                         ? (IData)(vlSelfRef.__PVT__comp_tgt_nodeid_linear)
                                         : (IData)(vlSelfRef.__PVT__tgt_nodeid_grid));
    if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa5U) 
                | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U)) 
               | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa8U)))) {
        vlSelfRef.__PVT__returnnid = 0U;
    } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9aU))) {
        vlSelfRef.__PVT__returnnid = ((IData)(vlSelfRef.__PVT__slc_origreq_is_read_snp_dmt_out)
                                       ? (IData)(vlSelfRef.__PVT__tgt_nodeid_grid)
                                       : (IData)(vlSelfRef.__PVT__comp_tgt_nodeid_linear));
    } else {
        vlSelfRef.__PVT__returnnid = VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U);
    }
    VL_ASSIGNSEL_WI(680,15,0U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    VL_CONCAT_III(15,11,4, (0x7ffU 
                                            & ((IData)(vlSelfRef.__PVT__send_memdata)
                                                ? VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x4aU, 11)
                                                : (IData)(vlSelfRef.__PVT__comp_tgt_nodeid))), 
                                  (0xfU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0U, 4))));
    VL_ASSIGNSEL_WI(151,23,0x1aU, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    VL_CONCAT_III(23,11,12, (IData)(vlSelfRef.__PVT__returnnid), 
                                  VL_EXTEND_II(12,6, 
                                               (0x3fU 
                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 6)))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__PVT__ic_TX_DATFLIT_s);
    VL_CONCAT_WIW(152,1,151, vlSelfRef.__PVT__ic_TX_REQFLIT, 1U, vlSelfRef.__PVT__ic_TX_REQFLIT_s);
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi20___ctor_var_reset(Vsig_topology_top_sig_chi_xmt_compdata__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi20___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__cc_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8377306375537073466ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__ic_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17980292739927272412ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT, __VscopeHash, 11344885391285752503ull);
    vlSelf->__PVT__ic_TX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5674497833994614527ull);
    vlSelf->__PVT__l3_wrdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9791843214000505586ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__l3_wrdata, __VscopeHash, 18003566889332421426ull);
    vlSelf->__PVT__l3_wrbe = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14685619672498633367ull);
    vlSelf->__PVT__l3_drop_wrdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1194144497674625872ull);
    vlSelf->__PVT__dbid_from_l3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17251312435797380305ull);
    vlSelf->__PVT__l3_wrdatabuf_hasroom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9024268663274794995ull);
    vlSelf->__PVT__ic_TX_MEM_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15509416060074662194ull);
    vlSelf->__PVT__req_link_crdt_avlble = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9896736816565612110ull);
    vlSelf->__PVT__dat_link_crdt_avlble = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8842071170201213316ull);
    vlSelf->__PVT__empty_outcompfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6325585739201874543ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->__PVT__rddata_outcompfifo, __VscopeHash, 13886202332761437919ull);
    vlSelf->__PVT__rden_outcompfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8886584385858519593ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__wren_compbuff_rcv_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11341453654749857997ull);
    vlSelf->__PVT__wren_compbuff = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15238093118913760672ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__wrdata_dataflit, __VscopeHash, 3378375706371419523ull);
    vlSelf->__PVT__wrbe_dataflit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1797594498267202494ull);
    vlSelf->__PVT__wren_which128 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2928684565670844867ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__valid_location_all, __VscopeHash, 15691278364285599930ull);
    vlSelf->__PVT__read_compbuf_datareuse_1st = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6274083841970199007ull);
    vlSelf->__PVT__rden_whichcompfifo_1st = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5509032055052891637ull);
    vlSelf->__PVT__rden_which16bytes_1st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1344652133813019292ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__rddata_compfifo_1st, __VscopeHash, 16096474019285404546ull);
    vlSelf->__PVT__rdbe_to_compdata_1st = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10948574360022597351ull);
    vlSelf->__PVT__rden_whichcompfifo_2nd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13060892155541568180ull);
    vlSelf->__PVT__rden_which16bytes_2nd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17476598023409336661ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__rddata_compfifo_2nd, __VscopeHash, 17386944977892447061ull);
    vlSelf->__PVT__rdbe_to_compdata_2nd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14093778943262611337ull);
    vlSelf->__PVT__read_compbuf_datareuse_2nd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1175786355711014208ull);
    vlSelf->__PVT__dealloc_compfifo_vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8362539444287821795ull);
    vlSelf->__PVT__req_resp_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15373783711339039012ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__respbody_compdata, __VscopeHash, 18159381090262869894ull);
    vlSelf->__PVT__gnt_resp_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2708574434480024766ull);
    vlSelf->__PVT__allocate_respbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14112340887089749087ull);
    vlSelf->__PVT__respbuff_avail = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7306347581112127521ull);
    vlSelf->__PVT__clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5374427970708754084ull);
    vlSelf->__PVT__index_pendingq_clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13034040900142042910ull);
    vlSelf->__PVT__compdata_clr_outstand = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5694655595672539364ull);
    vlSelf->__PVT__clr_collnreg_sending_ini = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2021161492290688597ull);
    vlSelf->__PVT__clr_2nd_buffer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5189925435663627466ull);
    vlSelf->__PVT__clr_unused_compbuff_num = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15920510751932765253ull);
    vlSelf->__PVT__o_xmt_compdata_nodeid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2400192169391761117ull);
    vlSelf->__PVT__o_xmt_compdata_linear_nodeid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5045343948395879525ull);
    vlSelf->__PVT__i_xmt_compdata_full_node_id = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1685648617266092102ull);
    vlSelf->__PVT__xmtdata_crdt_avail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12907589820972475277ull);
    vlSelf->__PVT__clr_outstand_prep = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4831969144429222940ull);
    vlSelf->__PVT__compdata_sending_ccreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12083653312022928931ull);
    vlSelf->__PVT__snpreq_sending_datflit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17965399819420513908ull);
    vlSelf->__PVT__l3reqflit_fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11472252453616715901ull);
    vlSelf->__PVT__cc_reqflit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10043822492024180417ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__ic_TX_REQFLIT, __VscopeHash, 569663838784936448ull);
    vlSelf->__PVT__index_pendingq = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6354710427680261652ull);
    vlSelf->__PVT__addr_outstandq_to_compdata = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16900301021783641212ull);
    vlSelf->__PVT__compbuf_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 968607762346503633ull);
    vlSelf->__PVT__block_compbuf_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 470389546691545043ull);
    vlSelf->__PVT__allocate_compbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4253613421573339667ull);
    vlSelf->__PVT__wren_compbuff_num_compdata_1st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8911625818810551941ull);
    vlSelf->__PVT__wren_compbuff_num_compdata_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9349338333634213131ull);
    vlSelf->__PVT__use_early_write_response = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16156962359594802056ull);
    vlSelf->__PVT__slc_readnosnp_apply_dmt_compdata_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11518961313471587083ull);
    vlSelf->__PVT__slc_origreq_is_read_snp_dmt_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11320781052229726160ull);
    vlSelf->__PVT__send_dataflit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13914310886600991023ull);
    vlSelf->__PVT__selected_valid_location_1st = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10368957758659072790ull);
    vlSelf->__PVT__selected_valid_location_2nd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2728766072531620404ull);
    vlSelf->__PVT__read_compbuf_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18343474685581790920ull);
    vlSelf->__PVT__read_2nd_compbuff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9039150619434736034ull);
    vlSelf->__PVT__clr_2nd_compbuff_num = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18062063821605923443ull);
    vlSelf->__PVT__all4_locations_have_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11536235898316547097ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->__PVT__cc_outcompfifo_s, __VscopeHash, 13774244721863856694ull);
    vlSelf->__PVT__comp_tgt_nodeid_linear = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11298821693008703958ull);
    vlSelf->__PVT__tgt_nodeid_grid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6387887992653856042ull);
    vlSelf->__PVT__comp_tgt_nodeid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13640116560209669689ull);
    vlSelf->__PVT__compresp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4162871552531749166ull);
    vlSelf->__PVT__deallocate_1st_compbuff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3178406279520347612ull);
    vlSelf->__PVT__deallocate_2nd_compbuff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3880448641230603583ull);
    vlSelf->__PVT__swap_1st_and_2nd_compbuff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12081578954278092354ull);
    vlSelf->__PVT__comp_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7343714646513662765ull);
    vlSelf->__PVT__comp_dbid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1665227940325245635ull);
    vlSelf->__PVT__req_resp_compdata_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8581201675475769106ull);
    vlSelf->__PVT__respbuff_hasroom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10024262436476460848ull);
    vlSelf->__PVT__clr_pendingq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10930025842512264215ull);
    vlSelf->__PVT__mem_reqflit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18131187194991749765ull);
    vlSelf->__PVT__allocate_compbuf_1st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5060480382851261285ull);
    vlSelf->__PVT__allocate_compbuf_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15649458696408442320ull);
    vlSelf->__PVT__available_credits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15808204370360910140ull);
    vlSelf->__PVT__read_compdat_reuse_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15008145480697964282ull);
    vlSelf->__PVT__clr_outstand_cmd_pre = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17482734886909032978ull);
    vlSelf->__PVT__origreq_read_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17755398293402746691ull);
    vlSelf->__PVT__origreq_read_pu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11221236573374101475ull);
    vlSelf->__PVT__origreq_makeread_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1423500741530995689ull);
    vlSelf->__PVT__origreq_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15560095075107049584ull);
    vlSelf->__PVT__origreq_cache_state_SD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15030526716932521857ull);
    vlSelf->__PVT__origreq_cache_state_SC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15188090928163645392ull);
    vlSelf->__PVT__clear_compbuff_no_dataxfr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15784780909121447990ull);
    vlSelf->__PVT__read_u_from_SDnode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414438190442450904ull);
    vlSelf->__PVT__origreq_wr_uniq_fl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14144755933449632022ull);
    vlSelf->__PVT__origreq_wr_uniq_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5990043271756164544ull);
    vlSelf->__PVT__origreq_wr_uniq_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4546312866433891767ull);
    vlSelf->__PVT__origreq_wr_uniq_nonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17108450998055230721ull);
    vlSelf->__PVT__origreq_wr_uniq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15586929100126804778ull);
    vlSelf->__PVT__origreq_wr_cb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16704914742895515102ull);
    vlSelf->__PVT__origreq_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14162401519455395033ull);
    vlSelf->__PVT__origreq_wr_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 254008001806684199ull);
    vlSelf->__PVT__origreq_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12391208343223175384ull);
    vlSelf->__PVT__origreq_atom_no_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15727126974622124404ull);
    vlSelf->__PVT__origreq_wrback_wrcln = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4003770867034173456ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__l3_wrdata_nxt, __VscopeHash, 4985711509664491308ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__l3_wrdata_stored, __VscopeHash, 11190736612511888981ull);
    vlSelf->__PVT__l3_wrbe_nxt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12434016932254485168ull);
    vlSelf->__PVT__l3_wrbe_stored = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18432542605260269008ull);
    vlSelf->__PVT__l3_drop_wrdata_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17420822673564459901ull);
    vlSelf->__PVT__l3_drop_wrdata_stored = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10856780596153637606ull);
    vlSelf->__PVT__orig_req_is_wr_nosnpfl_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3464484995465346320ull);
    vlSelf->__PVT__orig_req_is_wr_nosnpfl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3565403175322929159ull);
    vlSelf->__PVT__orig_req_is_wr_nosnpptl_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6604444698369647832ull);
    vlSelf->__PVT__orig_req_is_wr_nosnpptl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4659931427949990965ull);
    vlSelf->__PVT__orig_req_is_wr_uniquefl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4444753477455994554ull);
    vlSelf->__PVT__orig_req_is_wr_uniqueptl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6342511712273394465ull);
    vlSelf->__PVT__orig_req_is_wr_backfl_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14159089466536854549ull);
    vlSelf->__PVT__orig_req_is_wr_backfl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8093609540485888979ull);
    vlSelf->__PVT__orig_req_is_wr_cleanfl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16410417507601143617ull);
    vlSelf->__PVT__origreq_wruniq_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17149207263675809671ull);
    vlSelf->__PVT__origreq_wrnosnp_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3255307862333213954ull);
    vlSelf->__PVT__origreq_writefull_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3605476733144607233ull);
    vlSelf->__PVT__origreq_writefull_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12295906108505209879ull);
    vlSelf->__PVT__origreq_writeptl_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16265037834944496195ull);
    vlSelf->__PVT__origreq_write_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17302242863953973607ull);
    vlSelf->__PVT__memreq_wrcmo_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3032431453153823120ull);
    vlSelf->__PVT__wrcmo_to_send_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11110273441100358241ull);
    vlSelf->__PVT__wrcmo_to_send_slc_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10643605052037622163ull);
    vlSelf->__PVT__write_copyback_cmo_cancel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11366404505913293247ull);
    vlSelf->__PVT__merge_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7216154752194836220ull);
    vlSelf->__PVT__wrcmo_clr_2nd_buffer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9972815433321359025ull);
    vlSelf->__PVT__drop_write_data_to_slc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12044622696513822229ull);
    vlSelf->__PVT__expcompack_has_respbufroom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5497721084783577979ull);
    vlSelf->__PVT__merge_wr_ptl_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2327724203092897500ull);
    vlSelf->__PVT__merge_dataless = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10991843828787900858ull);
    vlSelf->__PVT__merge_atom_ptldata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14813199342222871838ull);
    vlSelf->__PVT__origreq_read_ocsu_notsd_makereadunique = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13965097902056048061ull);
    vlSelf->__PVT__origreq_read_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15157724889747670894ull);
    vlSelf->__PVT__merge_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12539024429342892870ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__wrdata_merged_0, __VscopeHash, 17103860328475130633ull);
    vlSelf->__PVT__wrbe_merged_0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7395544596815435710ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__wrdata_merged_1, __VscopeHash, 7657129218680450370ull);
    vlSelf->__PVT__wrbe_merged_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3039059784327284023ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__wrdata_merged_2, __VscopeHash, 6782691810229323310ull);
    vlSelf->__PVT__wrbe_merged_2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 253770910730794345ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__wrdata_merged_3, __VscopeHash, 14155107046368100787ull);
    vlSelf->__PVT__wrbe_merged_3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6462253014439120779ull);
    vlSelf->__PVT__merge_rdcompdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16689183532525452934ull);
    vlSelf->__PVT__send_memdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5497797428119798704ull);
    vlSelf->__PVT__memwr_origreq_src_node_id = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17570865412104388712ull);
    vlSelf->__PVT__consumed_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6102239534665153977ull);
    vlSelf->__PVT__flag_memwr_allbe_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7737519528438201096ull);
    vlSelf->__PVT__flag_memwr_allbe_zero_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11916116743479216315ull);
    vlSelf->__PVT__make_be_allzero_memwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13343885913813159214ull);
    vlSelf->__PVT__was_SEND_REQ_st_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6442009124046366420ull);
    vlSelf->__PVT__was_SEND_REQ_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18200827228146330583ull);
    vlSelf->__PVT__origreq_read_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10768339642742849378ull);
    vlSelf->__PVT__origreq_read_once = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4452641214950530958ull);
    vlSelf->__PVT__origreq_wr_nosnp_fl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16434470105062141156ull);
    vlSelf->__PVT__origreq_wr_nosnp_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4349612416916942429ull);
    vlSelf->__PVT__origreq_wr_nosnp_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2308196000421032929ull);
    vlSelf->__PVT__origreq_wr_nosnp_nonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16437833570275077331ull);
    vlSelf->__PVT__origreq_wr_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5423444169437887266ull);
    vlSelf->__PVT__origreq_wr_back_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6638065487329554365ull);
    vlSelf->__PVT__origreq_makeinvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2016406103619752164ull);
    vlSelf->__PVT__origreq_cleanshared = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8612989266153439735ull);
    vlSelf->__PVT__origreq_rdwr_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15961996534782655769ull);
    vlSelf->__PVT__memreq_to_mem_or_slc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9321278799909037292ull);
    vlSelf->__PVT__memreq_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8634529071391956702ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__valid_location[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11727546928537498072ull);
    }
    vlSelf->__PVT__clr_pendingq_prep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9391679535509510454ull);
    vlSelf->__PVT__outstand_already_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14420496582576837089ull);
    vlSelf->__PVT__outstand_already_clr_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5013898426862471447ull);
    vlSelf->__PVT__avoid_clearing_outstand = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7556123514173079904ull);
    vlSelf->__PVT__avoid_clearing_outstand_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8231174994634069774ull);
    vlSelf->__PVT__clr_collnreg_sending_ini_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18040703683314467784ull);
    vlSelf->__PVT__invalidate_need_dataxfr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 66877238529020377ull);
    vlSelf->__PVT__invalidate_mayneed_dataxfr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11548549511736397286ull);
    vlSelf->__PVT__invalidate_no_dataxfr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1783062153085050926ull);
    vlSelf->__PVT__send_l3data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7122812478402735864ull);
    vlSelf->__PVT__read_once_cln_needxfr_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9750771093955192625ull);
    vlSelf->__PVT__read_notsd_needxfr_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1187835936193165868ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__wrdata_merged_selected, __VscopeHash, 4340643064343183057ull);
    vlSelf->__PVT__wrbe_merged_selected = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7371019348815942513ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__wrdata_merged_selected_2nd, __VscopeHash, 15159302057213839537ull);
    vlSelf->__PVT__wrbe_merged_selected_2nd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6338832440636884356ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__wrdata_merged_selected_3rd, __VscopeHash, 10288362028333199630ull);
    vlSelf->__PVT__wrbe_merged_selected_3rd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2473580888093975424ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__wrdata_merged_selected_4th, __VscopeHash, 17751223240564909021ull);
    vlSelf->__PVT__wrbe_merged_selected_4th = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12635135404012350868ull);
    vlSelf->__PVT__lastresp_wr_uniq_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3745066260795817027ull);
    vlSelf->__PVT__wren_compbuff_xmt_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7987891579283942239ull);
    vlSelf->__PVT__drop_wr_to_slc_but_keep_wrbe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6371050422687741570ull);
    vlSelf->__PVT__returnnid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3643104262992799360ull);
    vlSelf->__PVT__returntxnid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15501615785049006947ull);
    vlSelf->__PVT__flittype_rdnosnp_l3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2959465167522860148ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_TX_REQFLIT_s, __VscopeHash, 14179990316754646524ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__respbody_compdata_s, __VscopeHash, 16899133495461588881ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT_s, __VscopeHash, 3392453361497435561ull);
    vlSelf->__PVT__r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16978132545290669629ull);
    vlSelf->__PVT__proc_state_c = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10363500611039599482ull);
    vlSelf->__PVT__proc_state_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 381195574381786432ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__rddata_compfifo_1st_0, __VscopeHash, 12155377450206670237ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__rddata_compfifo_1st_1, __VscopeHash, 14128663304314551123ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__rddata_compfifo_1st_2, __VscopeHash, 17371734035506497152ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__rddata_compfifo_1st_3, __VscopeHash, 2781343240335966751ull);
    vlSelf->__PVT__rdbe_to_compdata_1st_0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9051850698770228693ull);
    vlSelf->__PVT__rdbe_to_compdata_1st_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16513139419773485725ull);
    vlSelf->__PVT__rdbe_to_compdata_1st_2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16735265250943296305ull);
    vlSelf->__PVT__rdbe_to_compdata_1st_3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4352555298970193585ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__rddata_compfifo_2nd_0, __VscopeHash, 1112120850193523545ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__rddata_compfifo_2nd_1, __VscopeHash, 6770719820191573759ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__rddata_compfifo_2nd_2, __VscopeHash, 3626169118638645818ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__rddata_compfifo_2nd_3, __VscopeHash, 253501779702210975ull);
    vlSelf->__PVT__rdbe_to_compdata_2nd_0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12998989353571329796ull);
    vlSelf->__PVT__rdbe_to_compdata_2nd_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8248983345114369032ull);
    vlSelf->__PVT__rdbe_to_compdata_2nd_2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15762822014844055321ull);
    vlSelf->__PVT__rdbe_to_compdata_2nd_3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11484598989887070907ull);
    vlSelf->__PVT__datf_homenid_attr_compdata = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 823073423044209208ull);
    vlSelf->__PVT__memwr_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13078851441538254871ull);
    vlSelf->__PVT__origreq_cleaninvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1656952921922479503ull);
    vlSelf->__Vdly__clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2869591869232169633ull);
    vlSelf->__Vdly__clr_collnreg_sending_ini = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10301564004254297070ull);
    vlSelf->__Vdly__index_pendingq_clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13287859021782215991ull);
    vlSelf->__Vdly__proc_state_c = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6689692836305646902ull);
    vlSelf->__Vdly__outstand_already_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 158201797819983977ull);
    vlSelf->__Vdly__avoid_clearing_outstand = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11164946507807221133ull);
    vlSelf->__Vdly__flag_memwr_allbe_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8131332344829624952ull);
    vlSelf->__Vdly__was_SEND_REQ_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 149545438318431308ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__Vdly__l3_wrdata_stored, __VscopeHash, 9560332276155633149ull);
    vlSelf->__Vdly__l3_wrbe_stored = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17385324551262919982ull);
    vlSelf->__Vdly__l3_drop_wrdata_stored = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7258864300199958706ull);
}
