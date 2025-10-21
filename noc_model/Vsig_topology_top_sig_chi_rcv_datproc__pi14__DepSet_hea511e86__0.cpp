// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_chi_rcv_datproc__pi14.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__0(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__0(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VL_ASSIGNBIT_WI(0x67U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    (1U & VL_BITSEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x67U)));
    VL_ASSIGNSEL_WI(104,16,0x41U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(16,2,14, (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x4fU, 2)), 
                                  VL_CONCAT_III(14,2,12, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x4dU, 2)), 
                                                (0xfffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x41U, 12)))));
    VL_ASSIGNSEL_WI(104,9,0x35U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(9,4,5, (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3aU, 4)), 
                                  VL_CONCAT_III(5,3,2, 
                                                (7U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x37U, 3)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x35U, 2)))));
    VL_ASSIGNSEL_WI(104,27,0x1aU, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(27,4,23, (0xfU & 
                                            VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4)), 
                                  VL_CONCAT_III(23,11,12, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x26U, 11)), 
                                                (0xfffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x1aU, 12)))));
    VL_ASSIGNSEL_WI(104,26,0U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(104,22,0x51U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(22,4,18, (0xfU & 
                                            VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x63U, 4)), 
                                  VL_CONCAT_III(18,16,2, 
                                                (0xffffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x53U, 16)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x51U, 2)))));
    VL_ASSIGNSEL_WI(104,3,0x3eU, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    (7U & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3eU, 3)));
    if (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done))) {
        VL_ASSIGNSEL_WI(104,12,0x1aU, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid);
    }
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(3,1,2, 
                                              (((~ 
                                                 VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 1U)) 
                                                & (~ 
                                                   VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 0U))) 
                                               & VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done))), 
                                              VL_CONCAT_III(2,1,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 1U)), 
                                                            (1U 
                                                             & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 0U)))))))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 0U))) {
            VL_ASSIGNSEL_WI(104,4,0x31U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 3U);
        } else if ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 1U))) {
            VL_ASSIGNSEL_WI(104,4,0x31U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 4U);
        } else if ((((~ VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 1U)) 
                     & (~ VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 0U))) 
                    & VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done)))) {
            VL_ASSIGNSEL_WI(104,4,0x31U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 4U);
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_chi_rcv_datproc.sv:377: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_chi_rcv_datproc_0.mux_wrdata_drespcmdfifo_s: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_chi_rcv_datproc.sv", 377, "");
    }
    if (vlSelfRef.__PVT__ic_RX_DATFLITV) {
        vlSelfRef.__PVT__wrbe_dataflit = VL_SEL_QWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x68U, 64);
        VL_SEL_WWII(512, 680, vlSelfRef.__PVT__wrdata_dataflit, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0xa8U, 512);
    } else if (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf))) {
        vlSelfRef.__PVT__wrbe_dataflit = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be;
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wrdata_dataflit, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat);
    } else {
        vlSelfRef.__PVT__wrbe_dataflit = 0xffffffffffffffffULL;
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wrdata_dataflit, vlSelfRef.__PVT__l3_datflit);
    }
    VL_ASSIGNSEL_II(4,2,0U, vlSelfRef.__PVT__wren_which128, 
                    VL_CONCAT_III(2,1,1, (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                           | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                          | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf))), 
                                  (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                    | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                   | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)))));
    VL_ASSIGNSEL_II(4,2,2U, vlSelfRef.__PVT__wren_which128, 
                    VL_CONCAT_III(2,1,1, (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                           | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                          | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf))), 
                                  (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                    | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                   | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)))));
    vlSelfRef.__PVT__index_outq_rcvdata = (0x3fU & 
                                           ((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV)
                                             ? VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x1aU, 6)
                                             : ((IData)(vlSelfRef.__PVT__l3_datvalid)
                                                 ? 
                                                VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__data_txnid_cache), 0U, 6)
                                                 : 
                                                (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf))
                                                  ? 
                                                 VL_SEL_IIII(12, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid), 0U, 6)
                                                  : 0U))));
    vlSelfRef.__PVT__rcv_datproc_wr_to_compbuff = (
                                                   ((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                                    | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                                   | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)));
    VL_CONCAT_WIW(106,2,104, __Vtemp_1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), vlSelfRef.__PVT__wrdata_drespcmdfifo_s);
    VL_CONCAT_WIW(108,2,106, __Vtemp_2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done), __Vtemp_1);
    VL_CONCAT_WIW(109,1,108, vlSelfRef.__PVT__wrdata_drespcmdfifo, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__clr_collnreg_sending_ini), __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__1(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compq_buff_to_rcvdatproc = (((IData)(vlSelfRef.__PVT__vld_compq_buff_to_rcvdatproc_2nd) 
                                                  & (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                                      & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
                                                     | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                                                        & (~ (IData)(vlSelfRef.__PVT__vld_compbuf_2nd_for_snpdata)))))
                                                  ? (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc_2nd)
                                                  : (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc_1st));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (1U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (1U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (1U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (2U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (2U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (2U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (3U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (3U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (3U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (4U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (4U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (4U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (5U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (5U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (5U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (6U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (6U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (6U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (7U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (7U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (7U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (8U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (8U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (8U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (9U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (9U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (9U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xaU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xaU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xaU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xbU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xbU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xbU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xcU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xcU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xcU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xdU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xdU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xdU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xeU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xeU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xeU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xfU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xfU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xfU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x10U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x10U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x10U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x11U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x11U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x11U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x12U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x12U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x12U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x13U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x13U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x13U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x14U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x14U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x14U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x15U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x15U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x15U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x16U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x16U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x16U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x17U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x17U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x17U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x18U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x18U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x18U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x19U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x19U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x19U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1aU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1aU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1aU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1bU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1bU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1bU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1cU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1cU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1cU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1dU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1dU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1dU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1eU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1eU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1eU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1fU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1fU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    vlSelfRef.__PVT__wren_drespcmdfifo = ((0U != vlSelfRef.__PVT__wren_drespcmdfifo_s) 
                                          | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done)));
    vlSelfRef.__PVT__wren_memrespcmdq_nosnp = (0U != vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    vlSelfRef.__PVT__wren_memrespcmdq = ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                                         | (IData)(vlSelfRef.__PVT__wren_memrespcmdq_nosnp));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__1(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__2(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelfRef.__PVT__send_datacrdt_update = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__ready 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                    | (IData)(vlSelfRef.__PVT__l3_datvalid))));
    vlSelfRef.__PVT__opcode_copyback_nocopyback = (
                                                   ((3U 
                                                     == 
                                                     (0xfU 
                                                      & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))) 
                                                    | (0xcU 
                                                       == 
                                                       (0xfU 
                                                        & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4)))) 
                                                   | (2U 
                                                      == 
                                                      (0xfU 
                                                       & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSelfRef.__PVT__opcode_compdata = (4U == (0xfU 
                                               & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4)));
    vlSelfRef.__PVT__opcode_writedatacancel = (7U == 
                                               (0xfU 
                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4)));
    vlSelfRef.__PVT__opcode_snprespdata = (((1U == 
                                             (0xfU 
                                              & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))) 
                                            | (5U == 
                                               (0xfU 
                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4)))) 
                                           | (6U == 
                                              (0xfU 
                                               & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc.__PVT__send_working_update 
        = vlSelfRef.__PVT__send_datacrdt_update;
    vlSelfRef.__PVT__opcode_valid = ((((IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback) 
                                       | (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
                                      | (IData)(vlSelfRef.__PVT__opcode_compdata)) 
                                     | (IData)(vlSelfRef.__PVT__opcode_writedatacancel));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__4(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drive_xLCRDV_data = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc.__PVT__drive_xLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__5(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VL_ASSIGNBIT_WI(0x67U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    (1U & VL_BITSEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x67U)));
    VL_ASSIGNSEL_WI(104,16,0x41U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(16,2,14, (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x4fU, 2)), 
                                  VL_CONCAT_III(14,2,12, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x4dU, 2)), 
                                                (0xfffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x41U, 12)))));
    VL_ASSIGNSEL_WI(104,9,0x35U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(9,4,5, (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3aU, 4)), 
                                  VL_CONCAT_III(5,3,2, 
                                                (7U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x37U, 3)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x35U, 2)))));
    VL_ASSIGNSEL_WI(104,27,0x1aU, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(27,4,23, (0xfU & 
                                            VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4)), 
                                  VL_CONCAT_III(23,11,12, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x26U, 11)), 
                                                (0xfffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x1aU, 12)))));
    VL_ASSIGNSEL_WI(104,26,0U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(104,22,0x51U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    VL_CONCAT_III(22,4,18, (0xfU & 
                                            VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x63U, 4)), 
                                  VL_CONCAT_III(18,16,2, 
                                                (0xffffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x53U, 16)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x51U, 2)))));
    VL_ASSIGNSEL_WI(104,3,0x3eU, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 
                    (7U & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3eU, 3)));
    if (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done))) {
        VL_ASSIGNSEL_WI(104,12,0x1aU, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid);
    }
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(3,1,2, 
                                              (((~ 
                                                 VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 1U)) 
                                                & (~ 
                                                   VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 0U))) 
                                               & VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done))), 
                                              VL_CONCAT_III(2,1,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 1U)), 
                                                            (1U 
                                                             & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 0U)))))))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 0U))) {
            VL_ASSIGNSEL_WI(104,4,0x31U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 3U);
        } else if ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 1U))) {
            VL_ASSIGNSEL_WI(104,4,0x31U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 4U);
        } else if ((((~ VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 1U)) 
                     & (~ VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), 0U))) 
                    & VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done)))) {
            VL_ASSIGNSEL_WI(104,4,0x31U, vlSelfRef.__PVT__wrdata_drespcmdfifo_s, 4U);
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_chi_rcv_datproc.sv:377: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_chi_rcv_datproc_0.mux_wrdata_drespcmdfifo_s: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_chi_rcv_datproc.sv", 377, "");
    }
    if (vlSelfRef.__PVT__ic_RX_DATFLITV) {
        vlSelfRef.__PVT__wrbe_dataflit = VL_SEL_QWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x68U, 64);
        VL_SEL_WWII(512, 680, vlSelfRef.__PVT__wrdata_dataflit, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0xa8U, 512);
    } else if (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf))) {
        vlSelfRef.__PVT__wrbe_dataflit = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be;
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wrdata_dataflit, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat);
    } else {
        vlSelfRef.__PVT__wrbe_dataflit = 0xffffffffffffffffULL;
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wrdata_dataflit, vlSelfRef.__PVT__l3_datflit);
    }
    VL_ASSIGNSEL_II(4,2,0U, vlSelfRef.__PVT__wren_which128, 
                    VL_CONCAT_III(2,1,1, (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                           | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                          | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf))), 
                                  (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                    | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                   | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)))));
    VL_ASSIGNSEL_II(4,2,2U, vlSelfRef.__PVT__wren_which128, 
                    VL_CONCAT_III(2,1,1, (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                           | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                          | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf))), 
                                  (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                    | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                   | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)))));
    vlSelfRef.__PVT__rcv_datproc_wr_to_compbuff = (
                                                   ((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                                    | (IData)(vlSelfRef.__PVT__l3_datvalid)) 
                                                   | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)));
    VL_CONCAT_WIW(106,2,104, __Vtemp_1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf), vlSelfRef.__PVT__wrdata_drespcmdfifo_s);
    VL_CONCAT_WIW(108,2,106, __Vtemp_2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done), __Vtemp_1);
    VL_CONCAT_WIW(109,1,108, vlSelfRef.__PVT__wrdata_drespcmdfifo, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__clr_collnreg_sending_ini), __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__6(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__index_outq_rcvdata = (0x3fU & 
                                           ((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV)
                                             ? VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x1aU, 6)
                                             : ((IData)(vlSelfRef.__PVT__l3_datvalid)
                                                 ? 
                                                VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__data_txnid_cache), 0U, 6)
                                                 : 
                                                (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf))
                                                  ? 
                                                 VL_SEL_IIII(12, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid), 0U, 6)
                                                  : 0U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__7(Vsig_topology_top_sig_chi_rcv_datproc__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compq_buff_to_rcvdatproc = (((IData)(vlSelfRef.__PVT__vld_compq_buff_to_rcvdatproc_2nd) 
                                                  & (((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                                      & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
                                                     | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                                                        & (~ (IData)(vlSelfRef.__PVT__vld_compbuf_2nd_for_snpdata)))))
                                                  ? (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc_2nd)
                                                  : (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc_1st));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (1U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (1U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (1U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (2U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (2U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (2U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (3U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (3U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (3U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (4U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (4U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (4U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (5U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (5U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (5U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (6U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (6U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (6U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (7U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (7U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (7U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (8U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (8U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (8U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (9U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (9U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (9U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xaU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xaU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xaU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xbU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xbU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xbU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xcU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xcU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xcU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xdU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xdU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xdU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xeU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xeU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xeU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0xfU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0xfU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0xfU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x10U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x10U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x10U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x11U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x11U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x11U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x12U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x12U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x12U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x13U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x13U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x13U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x14U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x14U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x14U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x15U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x15U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x15U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x16U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x16U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x16U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x17U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x17U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x17U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x18U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x18U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x18U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x19U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x19U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x19U == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1aU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1aU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1aU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1bU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1bU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1bU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1cU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1cU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1cU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1dU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1dU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1dU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1eU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1eU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1eU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_compfifo, 
                    (((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                        & (IData)(vlSelfRef.__PVT__opcode_valid)) 
                       & (0x1fU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc))) 
                      | ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))) 
                     | (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                        & (0x1fU == (IData)(vlSelfRef.__PVT__compq_buff_to_rcvdatproc)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_writedatacancel)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                 & (IData)(vlSelfRef.__PVT__opcode_copyback_nocopyback)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    } else if ((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf)) 
                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_drespcmdfifo_s);
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0U))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 1U))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 2U))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 3U))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 4U))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 5U))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 6U))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 7U))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 8U))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 9U))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xaU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xbU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xcU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xdU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xeU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0xfU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x10U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x11U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x12U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x13U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x14U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x15U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x16U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x17U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x18U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x19U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s, 0U);
    if ((((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
          & (IData)(vlSelfRef.__PVT__opcode_compdata)) 
         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo, 0x1fU))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    }
    vlSelfRef.__PVT__wren_drespcmdfifo = ((0U != vlSelfRef.__PVT__wren_drespcmdfifo_s) 
                                          | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done)));
    vlSelfRef.__PVT__wren_memrespcmdq_nosnp = (0U != vlSelfRef.__PVT__wren_memrespcmdq_nosnp_s);
    vlSelfRef.__PVT__wren_memrespcmdq = ((IData)(vlSelfRef.__PVT__l3_datvalid) 
                                         | (IData)(vlSelfRef.__PVT__wren_memrespcmdq_nosnp));
}
