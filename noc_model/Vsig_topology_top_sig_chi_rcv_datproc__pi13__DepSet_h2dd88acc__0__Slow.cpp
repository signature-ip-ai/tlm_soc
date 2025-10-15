// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_rcv_datproc__pi13.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_datproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__2(Vsig_topology_top_sig_chi_rcv_datproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__porthas_datgnt_fromcc = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__l3_datvalid)));
    vlSelfRef.__PVT__data_fwdbit_cache = (1U & VL_BITSEL_IIII(13, (IData)(vlSelfRef.__PVT__l3_rddata_txnid), 0xcU));
    vlSelfRef.__PVT__data_txnid_cache = (0xfffU & VL_SEL_IIII(13, (IData)(vlSelfRef.__PVT__l3_rddata_txnid), 0U, 12));
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_datproc__pi13___ctor_var_reset(Vsig_topology_top_sig_chi_rcv_datproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi13___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__cc_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8377306375537073466ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__ic_RX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11842918978764936861ull);
    vlSelf->__PVT__ic_RX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16491006942135745796ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_DATFLIT, __VscopeHash, 2011190906039008480ull);
    vlSelf->__PVT__ic_RX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3658967141809139587ull);
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
    vlSelf->__PVT__l3_datvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18037613034641414218ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__l3_datflit, __VscopeHash, 9412865659407568722ull);
    vlSelf->__PVT__l3_rddata_resperr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17960824384386241377ull);
    vlSelf->__PVT__l3_rddata_txnid = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11609160148862092481ull);
    vlSelf->__PVT__porthas_datgnt_fromcc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 260289634538244644ull);
    vlSelf->__PVT__wren_compfifo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7998938762228630326ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__wrdata_dataflit, __VscopeHash, 3378375706371419523ull);
    vlSelf->__PVT__wrbe_dataflit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1797594498267202494ull);
    vlSelf->__PVT__wren_which128 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2928684565670844867ull);
    vlSelf->__PVT__rcv_datproc_wr_to_compbuff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5069621296229615253ull);
    vlSelf->__PVT__wren_drespcmdfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2218642922983807528ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__wrdata_drespcmdfifo, __VscopeHash, 15090185112690892347ull);
    vlSelf->__PVT__wren_memrespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 913600410044621036ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__wrdata_memrespcmdq, __VscopeHash, 11547144100788774640ull);
    vlSelf->__PVT__index_outq_rcvdata = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8003945633691835691ull);
    vlSelf->__PVT__compq_buff_to_rcvdatproc_1st = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10387630494224006427ull);
    vlSelf->__PVT__compq_buff_to_rcvdatproc_2nd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2732871786700246567ull);
    vlSelf->__PVT__vld_compq_buff_to_rcvdatproc_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2804318706357737406ull);
    vlSelf->__PVT__vld_compbuf_2nd_for_snpdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8127965794600819949ull);
    vlSelf->__PVT__invalid_req_rcvdatproc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8160450347341578802ull);
    vlSelf->__PVT__drive_xLCRDV_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 562484575998492704ull);
    vlSelf->__PVT__send_datacrdt_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15463093112052214496ull);
    vlSelf->__PVT__data_txnid_cache = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12062756074823591459ull);
    vlSelf->__PVT__data_fwdbit_cache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6329413915676560308ull);
    vlSelf->__PVT__opcode_copyback_nocopyback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 169745219126535067ull);
    vlSelf->__PVT__opcode_writedatacancel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2189194459862257900ull);
    vlSelf->__PVT__opcode_snprespdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13611116051507229333ull);
    vlSelf->__PVT__opcode_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 574851498654546926ull);
    vlSelf->__PVT__opcode_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6277498923188840314ull);
    vlSelf->__PVT__compq_buff_to_rcvdatproc = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14594951869826031199ull);
    vlSelf->__PVT__wren_drespcmdfifo_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5438733090994874603ull);
    vlSelf->__PVT__wren_memrespcmdq_nosnp_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6792701322848665993ull);
    vlSelf->__PVT__wren_memrespcmdq_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14680456903382538796ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_DATFLIT_s, __VscopeHash, 4621413436226450250ull);
    VL_SCOPED_RAND_RESET_W(104, vlSelf->__PVT__wrdata_drespcmdfifo_s, __VscopeHash, 12235440236041511750ull);
    vlSelf->__Vdly__ic_RX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9226878708669058796ull);
}
