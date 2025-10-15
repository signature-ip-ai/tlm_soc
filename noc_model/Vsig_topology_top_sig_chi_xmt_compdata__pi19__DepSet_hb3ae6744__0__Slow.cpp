// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_chi_xmt_compdata__pi19.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__0(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__l3_wrbe = vlSelfRef.__PVT__l3_wrbe_stored;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__l3_wrdata, vlSelfRef.__PVT__l3_wrdata_stored);
    vlSelfRef.__PVT__l3_drop_wrdata = vlSelfRef.__PVT__l3_drop_wrdata_stored;
    vlSelfRef.__PVT__available_credits = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__sig_chi_crdt_recv_0.__PVT__available_credits;
    vlSelfRef.__PVT__respbuff_hasroom = (1U < (IData)(vlSelfRef.__PVT__respbuff_avail));
    vlSelfRef.__PVT__dat_link_crdt_atleast_2 = (2U 
                                                <= (IData)(vlSelfRef.__PVT__available_credits));
    vlSelfRef.__PVT__dat_link_crdt_avlble = (0U != (IData)(vlSelfRef.__PVT__available_credits));
    vlSelfRef.__PVT__xmtdata_crdt_avail = vlSelfRef.__PVT__dat_link_crdt_avlble;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__1(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datf_homenid_attr_compdata = VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U);
    vlSelfRef.__PVT__memwr_origreq_src_node_id = VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U);
    vlSelfRef.__PVT__valid_location[0U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0U, 4));
    vlSelfRef.__PVT__valid_location[1U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 4U, 4));
    vlSelfRef.__PVT__valid_location[2U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 8U, 4));
    vlSelfRef.__PVT__valid_location[3U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0xcU, 4));
    vlSelfRef.__PVT__valid_location[4U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x10U, 4));
    vlSelfRef.__PVT__valid_location[5U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x14U, 4));
    vlSelfRef.__PVT__valid_location[6U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x18U, 4));
    vlSelfRef.__PVT__valid_location[7U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x1cU, 4));
    vlSelfRef.__PVT__valid_location[8U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x20U, 4));
    vlSelfRef.__PVT__valid_location[9U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x24U, 4));
    vlSelfRef.__PVT__valid_location[0xaU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x28U, 4));
    vlSelfRef.__PVT__valid_location[0xbU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x2cU, 4));
    vlSelfRef.__PVT__valid_location[0xcU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x30U, 4));
    vlSelfRef.__PVT__valid_location[0xdU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x34U, 4));
    vlSelfRef.__PVT__valid_location[0xeU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x38U, 4));
    vlSelfRef.__PVT__valid_location[0xfU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x3cU, 4));
    vlSelfRef.__PVT__valid_location[0x10U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x40U, 4));
    vlSelfRef.__PVT__valid_location[0x11U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x44U, 4));
    vlSelfRef.__PVT__valid_location[0x12U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x48U, 4));
    vlSelfRef.__PVT__valid_location[0x13U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x4cU, 4));
    vlSelfRef.__PVT__valid_location[0x14U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x50U, 4));
    vlSelfRef.__PVT__valid_location[0x15U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x54U, 4));
    vlSelfRef.__PVT__valid_location[0x16U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x58U, 4));
    vlSelfRef.__PVT__valid_location[0x17U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x5cU, 4));
    vlSelfRef.__PVT__valid_location[0x18U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x60U, 4));
    vlSelfRef.__PVT__valid_location[0x19U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x64U, 4));
    vlSelfRef.__PVT__valid_location[0x1aU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x68U, 4));
    vlSelfRef.__PVT__valid_location[0x1bU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x6cU, 4));
    vlSelfRef.__PVT__valid_location[0x1cU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x70U, 4));
    vlSelfRef.__PVT__valid_location[0x1dU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x74U, 4));
    vlSelfRef.__PVT__valid_location[0x1eU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x78U, 4));
    vlSelfRef.__PVT__valid_location[0x1fU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x7cU, 4));
    VL_ASSIGN_W(181,vlSelfRef.__PVT__cc_outcompfifo_s, vlSelfRef.__PVT__rddata_outcompfifo);
    vlSelfRef.__PVT__origreq_wrback_wrcln = ((((0x17U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                               | (0x16U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                              | (0x1aU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                             | (0x1bU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_init_dirty 
        = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x75U));
    vlSelfRef.__PVT__expcompack_has_respbufroom = (1U 
                                                   & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U) 
                                                       & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                                                      | (~ 
                                                         VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U))));
    VL_ASSIGNSEL_WI(680,4,0x4dU, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    VL_EXTEND_II(4,2, (3U & ((1U & 
                                              VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x79U))
                                              ? 0U : 
                                             VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x1eU, 2)))));
    VL_ASSIGNSEL_WI(151,3,0x45U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    (7U & (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x93U) 
                             & (4U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                            | (0x1cU == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))))
                            ? VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x95U, 3)
                            : 6U)));
    VL_ASSIGNBIT_WI(0x7eU, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    (1U & VL_BITSEL_IIII(32, ((1U & 
                                               VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x93U))
                                               ? 0U
                                               : 1U), 0U)));
    VL_ASSIGNSEL_WI(151,4,0x81U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    (0xfU & VL_SEL_IIII(32, ((1U & 
                                              VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x93U))
                                              ? VL_EXTEND_II(32,4, 
                                                             (0xfU 
                                                              & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x8dU, 4)))
                                              : 0U), 0U, 4)));
    VL_ASSIGNSEL_WI(151,4,0x85U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    (0xfU & ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x92U) 
                                    | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x8aU)))
                              ? 0xdU : VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa1U, 4))));
    VL_ASSIGNBIT_WI(0x92U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    (1U & VL_BITSEL_IIII(32, ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x93U) 
                                               & (((4U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                                   | (0x1cU 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                  | (0x1dU 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))))
                                               ? VL_EXTEND_II(32,1, 
                                                              (1U 
                                                               & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x94U)))
                                               : 0U), 0U)));
    VL_ASSIGNSEL_WI(151,26,0U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    VL_CONCAT_III(26,11,15, VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x4aU, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0U, 4)))));
    vlSelfRef.__PVT__origreq_read_once = (3U == (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__returntxnid = (0xfffU & ((1U & 
                                               ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa5U) 
                                                 | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U)) 
                                                | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa8U)))
                                               ? 0U
                                               : ((1U 
                                                   & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9aU))
                                                   ? 
                                                  VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xfU, 12)
                                                   : 
                                                  VL_EXTEND_II(12,6, 
                                                               (0x3fU 
                                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 6))))));
    vlSelfRef.__PVT__comp_dbid = VL_CONCAT_III(12,1,11, 
                                               (1U 
                                                & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)), 
                                               VL_EXTEND_II(11,6, 
                                                            (0x3fU 
                                                             & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 6))));
    vlSelfRef.__PVT__comp_tgt_nodeid_linear = (0x7ffU 
                                               & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 4U, 11));
    vlSelfRef.__PVT__dbid_from_l3 = (0xfffU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x61U, 12));
    vlSelfRef.__PVT__index_pendingq = (0x3fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 6));
    vlSelfRef.__PVT__drop_write_data_to_slc = (1U & 
                                               (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3aU) 
                                                & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3cU)));
    vlSelfRef.__PVT__origreq_cache_state_SC = (5U == 
                                               (7U 
                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)));
    vlSelfRef.__PVT__origreq_makeinvalid = (0xaU == 
                                            (0x7fU 
                                             & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_cleanshared = (8U == (0x7fU 
                                                   & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_cleaninvalid = (9U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_atom_no_compdata = (((
                                                   (((((0x28U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                                       | (0x29U 
                                                          == 
                                                          (0x7fU 
                                                           & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                      | (0x2aU 
                                                         == 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                     | (0x2bU 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                    | (0x2cU 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                   | (0x2dU 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                  | (0x2eU 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                 | (0x2fU 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))));
    vlSelfRef.__PVT__read_once_cln_needxfr_mem = ((
                                                   ((2U 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                                    | (3U 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                   & (((1U 
                                                        == 
                                                        (7U 
                                                         & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)))) 
                                                      | (7U 
                                                         == 
                                                         (7U 
                                                          & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))))) 
                                                  & (~ 
                                                     VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U)));
    vlSelfRef.__PVT__read_notsd_needxfr_mem = (((0x26U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                                & (((1U 
                                                     == 
                                                     (7U 
                                                      & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))) 
                                                    | (3U 
                                                       == 
                                                       (7U 
                                                        & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))))) 
                                               & (~ 
                                                  VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U)));
    vlSelfRef.__PVT__invalidate_need_dataxfr = (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x71U) 
                                                & (7U 
                                                   == 
                                                   (7U 
                                                    & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))));
    vlSelfRef.__PVT__invalidate_no_dataxfr = (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x71U) 
                                              & (5U 
                                                 == 
                                                 (7U 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))));
    vlSelfRef.__PVT__origreq_makeread_u = (0x41U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_read_u = (7U == (0x7fU 
                                              & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_read_pu = (0x4cU == (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_read_nosnp = (4U == (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_wr_back_ptl = (0x1aU == 
                                            (0x7fU 
                                             & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_wr_cb = (((((0x15U == 
                                          (0x7fU & 
                                           VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                         | (0x16U == 
                                            (0x7fU 
                                             & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                        | (0x17U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                       | (0x1aU == 
                                          (0x7fU & 
                                           VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                      | (0x1bU == (0x7fU 
                                                   & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))));
    vlSelfRef.__PVT__origreq_cache_state_SD = (7U == 
                                               (7U 
                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)));
    vlSelfRef.__PVT__origreq_wr_nosnp_fl = (0x1dU == 
                                            (0x7fU 
                                             & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_atom = (((((((((((((((
                                                   (((0x28U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                                     | (0x29U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                    | (0x2aU 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                   | (0x2bU 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                  | (0x2cU 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                 | (0x2dU 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                                | (0x2eU 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                               | (0x2fU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                              | (0x30U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                             | (0x31U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                            | (0x32U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                           | (0x33U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                          | (0x34U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                         | (0x35U == 
                                            (0x7fU 
                                             & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                        | (0x36U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                       | (0x37U == 
                                          (0x7fU & 
                                           VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                      | (0x38U == (0x7fU 
                                                   & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                     | (0x39U == (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))));
    vlSelfRef.__PVT__origreq_read_snp = (((((((3U == 
                                               (0x7fU 
                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                              | (2U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                             | (1U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                            | (7U == 
                                               (0x7fU 
                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                           | (0x26U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                          | (0x41U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))) 
                                         | (0x4cU == 
                                            (0x7fU 
                                             & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))));
    vlSelfRef.__PVT__invalidate_mayneed_dataxfr = (
                                                   VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x71U) 
                                                   & ((1U 
                                                       == 
                                                       (7U 
                                                        & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))) 
                                                      | (3U 
                                                         == 
                                                         (7U 
                                                          & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)))));
    vlSelfRef.__PVT__origreq_wr_uniq_fl = (0x19U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_wr_uniq_zero = (0x43U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_wr_nosnp_zero = (0x44U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_wr_nosnp_ptl = (0x1cU 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_nosnpfl_clean_i 
        = (0x51U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_nosnpptl_clean_s 
        = (0x60U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_uniquefl_clean_s 
        = (0x54U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_nosnpfl_clean_s 
        = (0x50U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_nosnpptl_clean_i 
        = (0x61U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_i 
        = (0x59U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__origreq_wr_uniq_ptl = (0x18U == 
                                            (0x7fU 
                                             & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_uniqueptl_clean_s 
        = (0x64U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s 
        = (0x58U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s 
        = (0x5cU == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
    vlSelfRef.__PVT__selected_valid_location_1st = 
        vlSelfRef.__PVT__valid_location[(0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5))];
    vlSelfRef.__PVT__selected_valid_location_2nd = 
        vlSelfRef.__PVT__valid_location[(0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))];
    VL_ASSIGNSEL_WI(73,21,0x2dU, vlSelfRef.__PVT__respbody_compdata_s, 
                    VL_CONCAT_III(21,12,9, (IData)(vlSelfRef.__PVT__comp_dbid), 
                                  VL_EXTEND_II(9,3, 
                                               (7U 
                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x1bU, 3)))));
    VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__PVT__respbody_compdata_s, 
                    VL_CONCAT_III(26,11,15, VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U), 
                                  VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__comp_tgt_nodeid_linear), 
                                                (0xfU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(151,2,0x7fU, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9aU) 
                        & ((IData)(vlSelfRef.__PVT__origreq_read_nosnp) 
                           | (IData)(vlSelfRef.__PVT__origreq_read_once))) 
                       & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U))) 
                      & (0U == (3U & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x36U, 2))))
                      ? 1U : 0U));
    vlSelfRef.__PVT__clear_compbuff_no_dataxfr = (((IData)(vlSelfRef.__PVT__origreq_makeread_u) 
                                                   & (IData)(vlSelfRef.__PVT__origreq_cache_state_SD)) 
                                                  & (~ 
                                                     VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U)));
    vlSelfRef.__PVT__read_u_from_SDnode = ((((IData)(vlSelfRef.__PVT__origreq_read_u) 
                                             | (IData)(vlSelfRef.__PVT__origreq_read_pu)) 
                                            & (IData)(vlSelfRef.__PVT__origreq_cache_state_SD)) 
                                           & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)));
    vlSelfRef.__PVT__merge_atom_ptldata = ((IData)(vlSelfRef.__PVT__origreq_atom) 
                                           & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
    vlSelfRef.__PVT__origreq_rd = ((IData)(vlSelfRef.__PVT__origreq_read_snp) 
                                   | (IData)(vlSelfRef.__PVT__origreq_read_nosnp));
    vlSelfRef.__PVT__merge_rdcompdata = (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U) 
                                         & (IData)(vlSelfRef.__PVT__origreq_read_snp));
    vlSelfRef.__PVT__merge_dataless = (1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x25U) 
                                              | (IData)(vlSelfRef.__PVT__invalidate_mayneed_dataxfr)) 
                                             & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9bU)));
    vlSelfRef.__PVT__origreq_wr_zero = ((IData)(vlSelfRef.__PVT__origreq_wr_uniq_zero) 
                                        | (IData)(vlSelfRef.__PVT__origreq_wr_nosnp_zero));
    vlSelfRef.__PVT__origreq_wr_nosnp_nonzero = ((IData)(vlSelfRef.__PVT__origreq_wr_nosnp_fl) 
                                                 | (IData)(vlSelfRef.__PVT__origreq_wr_nosnp_ptl));
    vlSelfRef.__PVT__origreq_wr_nosnp = (((IData)(vlSelfRef.__PVT__origreq_wr_nosnp_fl) 
                                          | (IData)(vlSelfRef.__PVT__origreq_wr_nosnp_ptl)) 
                                         | (IData)(vlSelfRef.__PVT__origreq_wr_nosnp_zero));
    vlSelfRef.__PVT__origreq_wrnosnp_cmo = ((((IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpfl_clean_i) 
                                              | (IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpfl_clean_s)) 
                                             | (IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpptl_clean_i)) 
                                            | (IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpptl_clean_s));
    vlSelfRef.__PVT__origreq_writefull_clean_i = ((IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpfl_clean_i) 
                                                  | (IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_i));
    vlSelfRef.__PVT__origreq_wr_uniq_nonzero = ((IData)(vlSelfRef.__PVT__origreq_wr_uniq_fl) 
                                                | (IData)(vlSelfRef.__PVT__origreq_wr_uniq_ptl));
    vlSelfRef.__PVT__origreq_wr_uniq = (((IData)(vlSelfRef.__PVT__origreq_wr_uniq_fl) 
                                         | (IData)(vlSelfRef.__PVT__origreq_wr_uniq_ptl)) 
                                        | (IData)(vlSelfRef.__PVT__origreq_wr_uniq_zero));
    vlSelfRef.__PVT__lastresp_wr_uniq_ptl = ((IData)(vlSelfRef.__PVT__origreq_wr_uniq_ptl) 
                                             & (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                                  & (~ 
                                                     VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U))) 
                                                 | (~ 
                                                    ((((7U 
                                                        == 
                                                        (7U 
                                                         & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)))) 
                                                      | (3U 
                                                         == 
                                                         (7U 
                                                          & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)))) 
                                                     & (~ 
                                                        VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U))))) 
                                                | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x8cU)));
    vlSelfRef.__PVT__origreq_wruniq_cmo = ((IData)(vlSelfRef.__PVT__orig_req_is_wr_uniquefl_clean_s) 
                                           | (IData)(vlSelfRef.__PVT__orig_req_is_wr_uniqueptl_clean_s));
    vlSelfRef.__PVT__origreq_writeptl_cmo = (((IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpptl_clean_i) 
                                              | (IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpptl_clean_s)) 
                                             | (IData)(vlSelfRef.__PVT__orig_req_is_wr_uniqueptl_clean_s));
    vlSelfRef.__PVT__write_copyback_cmo_cancel = ((
                                                   ((((IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_i) 
                                                      | (IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s)) 
                                                     | (IData)(vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s)) 
                                                    & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb2U)) 
                                                   & (~ 
                                                      VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU))) 
                                                  & (~ 
                                                     VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU)));
    vlSelfRef.__PVT__wrcmo_to_send_cmo = (((((IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s) 
                                             | (IData)(vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s)) 
                                            & (~ (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                                  & (~ 
                                                     VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U))))) 
                                           & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb2U)) 
                                          | ((((IData)(vlSelfRef.__PVT__orig_req_is_wr_uniqueptl_clean_s) 
                                               | (IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_i)) 
                                              & (((1U 
                                                   == 
                                                   (7U 
                                                    & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))) 
                                                  | (3U 
                                                     == 
                                                     (7U 
                                                      & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)))) 
                                                 | (7U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))))) 
                                             & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U))));
    vlSelfRef.__PVT__wrcmo_to_send_slc_data = (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U) 
                                               & (((IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpfl_clean_s) 
                                                   | (IData)(vlSelfRef.__PVT__orig_req_is_wr_uniquefl_clean_s)) 
                                                  | (((IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s) 
                                                      | (IData)(vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s)) 
                                                     & ((~ 
                                                         VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb2U)) 
                                                        | (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                                           & (~ 
                                                              VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U)))))));
    vlSelfRef.__PVT__origreq_writefull_clean_s = ((
                                                   ((IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpfl_clean_s) 
                                                    | (IData)(vlSelfRef.__PVT__orig_req_is_wr_uniquefl_clean_s)) 
                                                   | (IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s)) 
                                                  | (IData)(vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s));
    vlSelfRef.__PVT__origreq_rdwr_nosnp = (((IData)(vlSelfRef.__PVT__origreq_read_nosnp) 
                                            | (IData)(vlSelfRef.__PVT__origreq_wr_nosnp)) 
                                           | (IData)(vlSelfRef.__PVT__origreq_wrnosnp_cmo));
    vlSelfRef.__PVT__origreq_wr = ((IData)(vlSelfRef.__PVT__origreq_wr_uniq) 
                                   | (IData)(vlSelfRef.__PVT__origreq_wr_cb));
    vlSelfRef.__PVT__merge_wr_ptl_data = ((((IData)(vlSelfRef.__PVT__origreq_wr_nosnp_ptl) 
                                            & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)) 
                                           | (IData)(vlSelfRef.__PVT__origreq_wr_back_ptl)) 
                                          | ((IData)(vlSelfRef.__PVT__origreq_wr_uniq_ptl) 
                                             & ((IData)(vlSelfRef.__PVT__lastresp_wr_uniq_ptl) 
                                                | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U))));
    vlSelfRef.__PVT__wrcmo_clr_2nd_buffer = (((((((IData)(vlSelfRef.__PVT__orig_req_is_wr_uniqueptl_clean_s) 
                                                  | (IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_i)) 
                                                 | (IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s)) 
                                                | (IData)(vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s)) 
                                               & (((1U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))) 
                                                   | (3U 
                                                      == 
                                                      (7U 
                                                       & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3)))) 
                                                  | (7U 
                                                     == 
                                                     (7U 
                                                      & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3eU, 3))))) 
                                              & (~ 
                                                 VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U))) 
                                             | ((IData)(vlSelfRef.__PVT__origreq_writeptl_cmo) 
                                                | (IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_i)));
    vlSelfRef.__PVT__memwr_opcode = ((((7U == (0xfU 
                                               & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x80U, 4))) 
                                       & (~ ((IData)(vlSelfRef.__PVT__origreq_writeptl_cmo) 
                                             & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                                | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU))))) 
                                      | (IData)(vlSelfRef.__PVT__write_copyback_cmo_cancel))
                                      ? 7U : 3U);
    vlSelfRef.__PVT__memreq_wrcmo_opcode = ((IData)(vlSelfRef.__PVT__origreq_writefull_clean_s)
                                             ? 0x50U
                                             : ((IData)(vlSelfRef.__PVT__origreq_writefull_clean_i)
                                                 ? 0x51U
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__orig_req_is_wr_nosnpptl_clean_i)
                                                  ? 0x61U
                                                  : 0x60U)));
    vlSelfRef.__PVT__origreq_write_cmo = (((IData)(vlSelfRef.__PVT__origreq_writefull_clean_s) 
                                           | (IData)(vlSelfRef.__PVT__origreq_writefull_clean_i)) 
                                          | (IData)(vlSelfRef.__PVT__origreq_writeptl_cmo));
    vlSelfRef.__PVT__merge_wrcmo = (((IData)(vlSelfRef.__PVT__origreq_write_cmo) 
                                     & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                        | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU))) 
                                    & (~ ((((IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s) 
                                            | (IData)(vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s)) 
                                           & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb2U)) 
                                          & (((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)) 
                                              & (~ 
                                                 VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xabU))) 
                                             | (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U) 
                                                & (~ 
                                                   VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU)))))));
    vlSelfRef.__PVT__all4_locations_have_data = 0U;
    if (((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
           | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
          | (IData)(vlSelfRef.__PVT__merge_dataless)) 
         | (IData)(vlSelfRef.__PVT__merge_wrcmo))) {
        vlSelfRef.__PVT__all4_locations_have_data = 
            ((0xfU == (IData)(vlSelfRef.__PVT__selected_valid_location_1st)) 
             & (0xfU == (IData)(vlSelfRef.__PVT__selected_valid_location_2nd)));
    } else if ((0xfU == (IData)(vlSelfRef.__PVT__selected_valid_location_1st))) {
        vlSelfRef.__PVT__all4_locations_have_data = 1U;
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__2(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__sig_chi_crdt_recv_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__sig_chi_crdt_recv_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__0(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__sig_chi_crdt_recv_0.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__1(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__send_dataflit = 0U;
    vlSelfRef.__PVT__send_memdata = 0U;
    vlSelfRef.__PVT__read_compbuf_all = 0U;
    vlSelfRef.__PVT__read_2nd_compbuff = 0U;
    vlSelfRef.__PVT__clr_2nd_compbuff_num = 0U;
    vlSelfRef.__PVT__read_compdat_reuse_en = 0U;
    vlSelfRef.__PVT__deallocate_1st_compbuff = 0U;
    vlSelfRef.__PVT__deallocate_2nd_compbuff = 0U;
    vlSelfRef.__PVT__swap_1st_and_2nd_compbuff = 0U;
    vlSelfRef.__PVT__req_resp_compdata = 0U;
    vlSelfRef.__PVT__allocate_respbuf = 0U;
    vlSelfRef.__PVT__rden_outcompfifo = 0U;
    vlSelfRef.__PVT__clr_pendingq = 0U;
    vlSelfRef.__PVT__flag_memwr_allbe_zero_nxt = vlSelfRef.__PVT__flag_memwr_allbe_zero;
    vlSelfRef.__PVT__make_be_allzero_memwr = 0U;
    vlSelfRef.__PVT__clr_pendingq_prep = 0U;
    vlSelfRef.__PVT__l3_wrdata_valid = 0U;
    vlSelfRef.__PVT__send_l3data = 0U;
    vlSelfRef.__PVT__was_SEND_REQ_st_nxt = 0U;
    vlSelfRef.__PVT__memreq_to_mem_or_slc = 0U;
    vlSelfRef.__PVT__memreq_opcode = 0x1fU;
    vlSelfRef.__PVT__cc_reqflit_valid = 0U;
    vlSelfRef.__PVT__flittype_rdnosnp_l3 = 0U;
    vlSelfRef.__PVT__block_compbuf_available = 0U;
    vlSelfRef.__PVT__allocate_compbuf_1st = 0U;
    vlSelfRef.__PVT__allocate_compbuf_2nd = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_valid = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_init_valid = 0U;
    vlSelfRef.__PVT__proc_state_n = 0U;
    vlSelfRef.__PVT__clr_collnreg_sending_ini_pre = 0U;
    vlSelfRef.__PVT__outstand_already_clr_nxt = 0U;
    vlSelfRef.__PVT__avoid_clearing_outstand_nxt = 0U;
    vlSelfRef.__PVT__clr_unused_compbuff_num = 0U;
    vlSelfRef.__PVT__mem_reqflit_valid = 0U;
    vlSelfRef.__PVT__wren_compbuff_xmt_dat = 0U;
    vlSelfRef.__PVT__merge_data = 0U;
    vlSelfRef.__PVT__compresp_opcode = 4U;
    vlSelfRef.__PVT__drop_wr_to_slc_but_keep_wrbe = 0U;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__proc_state_c)) 
               | (4U == (IData)(vlSelfRef.__PVT__proc_state_c))) 
              | (5U == (IData)(vlSelfRef.__PVT__proc_state_c))) 
             | (1U == (IData)(vlSelfRef.__PVT__proc_state_c))) 
            | (2U == (IData)(vlSelfRef.__PVT__proc_state_c))) 
           | (8U == (IData)(vlSelfRef.__PVT__proc_state_c))) 
          | (3U == (IData)(vlSelfRef.__PVT__proc_state_c))) 
         | (6U == (IData)(vlSelfRef.__PVT__proc_state_c)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
            vlSelfRef.__PVT__proc_state_n = 0U;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__empty_outcompfifo)))) {
                if ((1U & ((((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3bU) 
                                | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9dU)) 
                               | (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x88U) 
                                  & (IData)(vlSelfRef.__PVT__use_early_write_response))) 
                              | ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x86U) 
                                    | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x87U)) 
                                   & (0U == (3U & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x36U, 2)))) 
                                  & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)) 
                                 & (~ (IData)(vlSelfRef.__PVT__use_early_write_response)))) 
                             | (IData)(vlSelfRef.__PVT__invalidate_no_dataxfr)) 
                            | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x91U)) 
                           | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x77U)))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                } else if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x88U) 
                                   | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9eU)) 
                                  & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))))) {
                    vlSelfRef.__PVT__proc_state_n = 3U;
                } else if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x93U) 
                             & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                            & ((IData)(vlSelfRef.__PVT__origreq_rd) 
                               | ((IData)(vlSelfRef.__PVT__origreq_atom) 
                                  & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x92U)))))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__mem_reqflit_valid = 1U;
                    vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                    vlSelfRef.__PVT__memreq_opcode = 4U;
                } else if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x93U) 
                             & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                            & (((IData)(vlSelfRef.__PVT__origreq_wr) 
                                | (IData)(vlSelfRef.__PVT__origreq_wr_nosnp)) 
                               | ((IData)(vlSelfRef.__PVT__origreq_atom) 
                                  & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x92U))))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__mem_reqflit_valid = 1U;
                    vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                    vlSelfRef.__PVT__memreq_opcode 
                        = ((0x1cU == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))
                            ? 0x1cU : 0x1dU);
                } else if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x8aU) 
                             & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                            & (((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)) 
                                & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                               | (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U) 
                                  & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)))))) {
                    vlSelfRef.__PVT__proc_state_n = 7U;
                    vlSelfRef.__PVT__cc_reqflit_valid 
                        = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U));
                    vlSelfRef.__PVT__mem_reqflit_valid 
                        = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)));
                    vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                    vlSelfRef.__PVT__memreq_opcode = 0x1dU;
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                } else if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x89U) 
                             & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                            & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                    if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x8bU))) {
                        vlSelfRef.__PVT__allocate_compbuf_2nd = 1U;
                        vlSelfRef.__PVT__block_compbuf_available = 1U;
                    }
                } else if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x73U) 
                                  & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU))))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_valid = 1U;
                    vlSelfRef.__PVT__read_compbuf_all = 1U;
                    vlSelfRef.__PVT__read_compdat_reuse_en = 1U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                } else if (((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x73U) 
                               & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU)) 
                              & (~ (IData)(vlSelfRef.__PVT__origreq_atom_no_compdata))) 
                             & (IData)(vlSelfRef.__PVT__dat_link_crdt_avlble)) 
                            & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit)))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__send_dataflit = 1U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                    vlSelfRef.__PVT__clr_collnreg_sending_ini_pre 
                        = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7bU));
                } else if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x73U) 
                             & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU)) 
                            & (IData)(vlSelfRef.__PVT__origreq_atom_no_compdata))) {
                    vlSelfRef.__PVT__proc_state_n = 3U;
                    vlSelfRef.__PVT__req_resp_compdata_nxt = 1U;
                } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x74U))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_init_valid = 1U;
                    vlSelfRef.__PVT__read_compbuf_all = 1U;
                    vlSelfRef.__PVT__read_compdat_reuse_en = 1U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    if (vlSelfRef.__PVT__merge_atom_ptldata) {
                        vlSelfRef.__PVT__clr_unused_compbuff_num = 1U;
                        vlSelfRef.__PVT__deallocate_2nd_compbuff = 1U;
                    }
                } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x76U))) {
                    vlSelfRef.__PVT__proc_state_n = 3U;
                    vlSelfRef.__PVT__req_resp_compdata_nxt = 1U;
                    vlSelfRef.__PVT__deallocate_2nd_compbuff = 1U;
                } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x79U))) {
                    if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U) 
                               | (((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)) 
                                   & (IData)(vlSelfRef.__PVT__dat_link_crdt_avlble)) 
                                  & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit)))))) {
                        vlSelfRef.__PVT__proc_state_n 
                            = ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U))
                                ? 9U : 0U);
                        vlSelfRef.__PVT__send_l3data 
                            = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U));
                        vlSelfRef.__PVT__send_dataflit 
                            = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)));
                        vlSelfRef.__PVT__send_memdata 
                            = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)));
                        vlSelfRef.__PVT__read_compbuf_all = 1U;
                        vlSelfRef.__PVT__rden_outcompfifo 
                            = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)));
                        vlSelfRef.__PVT__clr_pendingq 
                            = (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)) 
                                     & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x78U))));
                        vlSelfRef.__PVT__deallocate_2nd_compbuff = 1U;
                    }
                } else if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7aU) 
                                  & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit))))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__send_dataflit = 1U;
                    vlSelfRef.__PVT__read_compbuf_all = 1U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                    vlSelfRef.__PVT__clr_collnreg_sending_ini_pre 
                        = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7bU));
                    vlSelfRef.__PVT__deallocate_2nd_compbuff = 1U;
                } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7cU))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                    vlSelfRef.__PVT__deallocate_2nd_compbuff = 1U;
                    vlSelfRef.__PVT__clr_collnreg_sending_ini_pre = 1U;
                } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x72U))) {
                    if (((~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)) 
                         & (IData)(vlSelfRef.__PVT__compbuf_available))) {
                        vlSelfRef.__PVT__proc_state_n = 0U;
                        vlSelfRef.__PVT__block_compbuf_available = 1U;
                        vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                        vlSelfRef.__PVT__flittype_rdnosnp_l3 = 1U;
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    }
                } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9aU))) {
                    if (((~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)) 
                         & (IData)(vlSelfRef.__PVT__compbuf_available))) {
                        vlSelfRef.__PVT__proc_state_n = 0U;
                        vlSelfRef.__PVT__rden_outcompfifo = 1U;
                        vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                        vlSelfRef.__PVT__flittype_rdnosnp_l3 = 1U;
                        vlSelfRef.__PVT__clr_pendingq 
                            = (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)) 
                                     | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x6eU)));
                        vlSelfRef.__PVT__clr_pendingq_prep 
                            = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U));
                    }
                } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x99U))) {
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 
                        (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)) 
                               | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x6eU)));
                    vlSelfRef.__PVT__clr_pendingq_prep 
                        = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U));
                } else if ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x98U) 
                              & (IData)(vlSelfRef.__PVT__all4_locations_have_data)) 
                             & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)) 
                            & (IData)(vlSelfRef.__PVT__l3_wrdatabuf_hasroom))) {
                    vlSelfRef.__PVT__send_l3data = 1U;
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__read_compbuf_all = 1U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 
                        (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)) 
                               | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x6eU)));
                    vlSelfRef.__PVT__clr_pendingq_prep 
                        = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U));
                } else if ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x27U) 
                              & (IData)(vlSelfRef.__PVT__read_u_from_SDnode)) 
                             & ((IData)(vlSelfRef.__PVT__all4_locations_have_data) 
                                & (IData)(vlSelfRef.__PVT__dat_link_crdt_avlble))) 
                            & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit)))) {
                    vlSelfRef.__PVT__send_dataflit = 1U;
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__read_compbuf_all = 1U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 
                        (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)) 
                               | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x6eU)));
                    vlSelfRef.__PVT__clr_pendingq_prep 
                        = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U));
                } else if ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x27U) 
                              & (~ (IData)(vlSelfRef.__PVT__read_u_from_SDnode))) 
                             & ((IData)(vlSelfRef.__PVT__all4_locations_have_data) 
                                & (IData)(vlSelfRef.__PVT__dat_link_crdt_avlble))) 
                            & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit)))) {
                    vlSelfRef.__PVT__send_dataflit = 1U;
                    vlSelfRef.__PVT__read_compbuf_all = 1U;
                    vlSelfRef.__PVT__read_compdat_reuse_en 
                        = (((IData)(vlSelfRef.__PVT__read_once_cln_needxfr_mem) 
                            & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x6dU)) 
                           | ((IData)(vlSelfRef.__PVT__read_notsd_needxfr_mem) 
                              & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x39U)));
                    if (((IData)(vlSelfRef.__PVT__read_once_cln_needxfr_mem) 
                         | (IData)(vlSelfRef.__PVT__read_notsd_needxfr_mem))) {
                        vlSelfRef.__PVT__proc_state_n = 2U;
                    } else if (((3U == (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)))) {
                        vlSelfRef.__PVT__proc_state_n = 6U;
                    } else {
                        vlSelfRef.__PVT__proc_state_n = 0U;
                        vlSelfRef.__PVT__rden_outcompfifo = 1U;
                        vlSelfRef.__PVT__clr_pendingq 
                            = (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)) 
                                     | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x6eU)));
                        vlSelfRef.__PVT__clr_pendingq_prep 
                            = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U));
                    }
                    vlSelfRef.__PVT__flag_memwr_allbe_zero_nxt 
                        = (1U & (~ (((IData)(vlSelfRef.__PVT__read_once_cln_needxfr_mem) 
                                     & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x6dU)) 
                                    | ((IData)(vlSelfRef.__PVT__read_notsd_needxfr_mem) 
                                       & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x39U)))));
                } else if (((IData)(vlSelfRef.__PVT__origreq_wr_uniq_ptl) 
                            & (~ (IData)(vlSelfRef.__PVT__lastresp_wr_uniq_ptl)))) {
                    if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U) 
                                & (~ (IData)(vlSelfRef.__PVT__wren_compbuff_rcv_dat))) 
                               & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))))) {
                        vlSelfRef.__PVT__proc_state_n = 0U;
                        vlSelfRef.__PVT__read_compbuf_all = 1U;
                        vlSelfRef.__PVT__read_compdat_reuse_en = 1U;
                        vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                        vlSelfRef.__PVT__wren_compbuff_xmt_dat = 1U;
                        vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    } else if ((1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)) 
                                      & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))))) {
                        vlSelfRef.__PVT__proc_state_n = 0U;
                        vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                        vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    }
                } else if (((((((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)) 
                                & ((IData)(vlSelfRef.__PVT__all4_locations_have_data) 
                                   | (IData)(vlSelfRef.__PVT__origreq_wr_zero))) 
                               & (IData)(vlSelfRef.__PVT__dat_link_crdt_avlble)) 
                              & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit))) 
                             | (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U) 
                                & ((IData)(vlSelfRef.__PVT__all4_locations_have_data) 
                                   | (IData)(vlSelfRef.__PVT__origreq_wr_zero)))) 
                            & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3cU) 
                                | (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x26U) 
                                   & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U)))) 
                               | (IData)(vlSelfRef.__PVT__invalidate_need_dataxfr)))) {
                    if (vlSelfRef.__PVT__origreq_wr_nosnp_nonzero) {
                        if ((1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU)))) {
                            vlSelfRef.__PVT__send_l3data 
                                = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U));
                            vlSelfRef.__PVT__send_dataflit 
                                = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)));
                            vlSelfRef.__PVT__send_memdata = 1U;
                            vlSelfRef.__PVT__read_compbuf_all = 1U;
                        }
                        if ((1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x85U)) 
                                   & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9fU))))) {
                            vlSelfRef.__PVT__proc_state_n 
                                = ((IData)(vlSelfRef.__PVT__use_early_write_response)
                                    ? ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U))
                                        ? 9U : 6U) : 
                                   ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U))
                                     ? 9U : 3U));
                        } else if ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x86U) 
                                      | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x87U)) 
                                     & (2U == (3U & 
                                               VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x36U, 2)))) 
                                    & (~ (IData)(vlSelfRef.__PVT__use_early_write_response)))) {
                            vlSelfRef.__PVT__proc_state_n 
                                = ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U))
                                    ? 9U : 3U);
                        } else {
                            vlSelfRef.__PVT__proc_state_n 
                                = ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U))
                                    ? 9U : 0U);
                            vlSelfRef.__PVT__rden_outcompfifo 
                                = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)));
                        }
                    } else if (((IData)(vlSelfRef.__PVT__origreq_wr_uniq_fl) 
                                | ((IData)(vlSelfRef.__PVT__origreq_wr_uniq_ptl) 
                                   & (IData)(vlSelfRef.__PVT__lastresp_wr_uniq_ptl)))) {
                        if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU))) {
                            vlSelfRef.__PVT__proc_state_n = 6U;
                        } else {
                            vlSelfRef.__PVT__send_l3data = 1U;
                            vlSelfRef.__PVT__read_compbuf_all = 1U;
                            vlSelfRef.__PVT__proc_state_n = 9U;
                        }
                    } else if (vlSelfRef.__PVT__origreq_wr_nosnp_zero) {
                        if (vlSelfRef.__PVT__use_early_write_response) {
                            vlSelfRef.__PVT__proc_state_n = 0U;
                            vlSelfRef.__PVT__rden_outcompfifo = 1U;
                            vlSelfRef.__PVT__clr_pendingq = 1U;
                        } else {
                            vlSelfRef.__PVT__proc_state_n = 3U;
                        }
                    } else if (vlSelfRef.__PVT__origreq_wr_uniq_zero) {
                        vlSelfRef.__PVT__proc_state_n = 3U;
                    } else {
                        vlSelfRef.__PVT__proc_state_n = 9U;
                        vlSelfRef.__PVT__send_l3data = 1U;
                        vlSelfRef.__PVT__read_compbuf_all = 1U;
                    }
                } else if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x25U) 
                                   & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U))) 
                                  | (IData)(vlSelfRef.__PVT__invalidate_mayneed_dataxfr)))) {
                    if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U) 
                               & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9bU))))) {
                        if (((~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)) 
                             & (IData)(vlSelfRef.__PVT__compbuf_available))) {
                            vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                            vlSelfRef.__PVT__block_compbuf_available = 1U;
                            vlSelfRef.__PVT__allocate_compbuf_2nd = 1U;
                            vlSelfRef.__PVT__proc_state_n = 0U;
                            vlSelfRef.__PVT__rden_outcompfifo = 1U;
                        }
                    } else if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                       & (IData)(vlSelfRef.__PVT__all4_locations_have_data)) 
                                      | (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU))))) {
                        vlSelfRef.__PVT__proc_state_n = 9U;
                        vlSelfRef.__PVT__send_l3data = 1U;
                        vlSelfRef.__PVT__read_compbuf_all = 1U;
                        vlSelfRef.__PVT__deallocate_2nd_compbuff 
                            = (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)) 
                                     & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9bU))));
                        vlSelfRef.__PVT__make_be_allzero_memwr 
                            = (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)) 
                                     & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9bU))));
                        vlSelfRef.__PVT__clr_unused_compbuff_num 
                            = (1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)) 
                                     & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9bU))));
                    }
                } else if ((1U & (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x26U) 
                                    | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x25U)) 
                                   & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U)) 
                                  | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x30U)))) {
                    vlSelfRef.__PVT__proc_state_n = 3U;
                    vlSelfRef.__PVT__read_compbuf_all 
                        = vlSelfRef.__PVT__clear_compbuff_no_dataxfr;
                    vlSelfRef.__PVT__req_resp_compdata_nxt = 1U;
                } else if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa5U) 
                             & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                            & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble))) {
                    vlSelfRef.__PVT__mem_reqflit_valid = 1U;
                    vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                    vlSelfRef.__PVT__memreq_opcode 
                        = (0x7fU & ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU) 
                                           | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)))
                                     ? 0x1cU : VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)));
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    if ((((IData)(vlSelfRef.__PVT__origreq_cleanshared) 
                          & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)) 
                         & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU))) {
                        vlSelfRef.__PVT__proc_state_n = 4U;
                    } else if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                      | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU)))) {
                        vlSelfRef.__PVT__proc_state_n = 5U;
                    } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xabU))) {
                        vlSelfRef.__PVT__proc_state_n = 3U;
                        vlSelfRef.__PVT__avoid_clearing_outstand_nxt = 1U;
                    } else {
                        vlSelfRef.__PVT__proc_state_n = 0U;
                        vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    }
                } else if ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U) 
                              | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa7U)) 
                             & (IData)(vlSelfRef.__PVT__dat_link_crdt_avlble)) 
                            & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit)))) {
                    if ((((IData)(vlSelfRef.__PVT__origreq_cleanshared) 
                          & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)) 
                         & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU))) {
                        vlSelfRef.__PVT__send_l3data = 1U;
                        vlSelfRef.__PVT__send_dataflit = 1U;
                        vlSelfRef.__PVT__send_memdata = 1U;
                        vlSelfRef.__PVT__read_compbuf_all = 1U;
                        vlSelfRef.__PVT__read_2nd_compbuff = 1U;
                        vlSelfRef.__PVT__merge_data 
                            = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                        vlSelfRef.__PVT__clr_2nd_compbuff_num = 1U;
                        vlSelfRef.__PVT__swap_1st_and_2nd_compbuff = 1U;
                        vlSelfRef.__PVT__proc_state_n = 9U;
                    } else {
                        vlSelfRef.__PVT__send_dataflit = 1U;
                        vlSelfRef.__PVT__send_memdata = 1U;
                        vlSelfRef.__PVT__read_compbuf_all 
                            = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU));
                        vlSelfRef.__PVT__read_2nd_compbuff 
                            = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU));
                        vlSelfRef.__PVT__merge_data 
                            = (1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U) 
                                     & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU)));
                        vlSelfRef.__PVT__clr_2nd_compbuff_num 
                            = (1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xabU) 
                                      & (~ ((IData)(vlSelfRef.__PVT__origreq_cleaninvalid) 
                                            & (IData)(vlSelfRef.__PVT__origreq_cache_state_SC)))) 
                                     | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU)));
                        vlSelfRef.__PVT__deallocate_1st_compbuff 
                            = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU)));
                        vlSelfRef.__PVT__deallocate_2nd_compbuff 
                            = (1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xabU) 
                                      & (~ ((IData)(vlSelfRef.__PVT__origreq_cleaninvalid) 
                                            & (IData)(vlSelfRef.__PVT__origreq_cache_state_SC)))) 
                                     & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU))));
                        vlSelfRef.__PVT__clr_unused_compbuff_num 
                            = ((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                               | (IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff));
                        vlSelfRef.__PVT__swap_1st_and_2nd_compbuff 
                            = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU));
                        vlSelfRef.__PVT__rden_outcompfifo 
                            = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U)));
                        vlSelfRef.__PVT__proc_state_n 
                            = ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U))
                                ? 4U : 0U);
                    }
                } else if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa8U) 
                             & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                            & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble))) {
                    vlSelfRef.__PVT__mem_reqflit_valid = 1U;
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                    vlSelfRef.__PVT__memreq_opcode 
                        = (0x7fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7));
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__proc_state_n = 0U;
                } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa9U))) {
                    vlSelfRef.__PVT__deallocate_1st_compbuff 
                        = (1U & ((((~ (IData)(vlSelfRef.__PVT__origreq_makeinvalid)) 
                                   & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x84U)) 
                                  & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU))) 
                                 & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU))));
                    vlSelfRef.__PVT__deallocate_2nd_compbuff 
                        = (1U & (((((~ (IData)(vlSelfRef.__PVT__origreq_makeinvalid)) 
                                    & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xabU)) 
                                   & (~ ((IData)(vlSelfRef.__PVT__origreq_cleaninvalid) 
                                         & (IData)(vlSelfRef.__PVT__origreq_cache_state_SC)))) 
                                  & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU))) 
                                 & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU))));
                    vlSelfRef.__PVT__clr_unused_compbuff_num 
                        = ((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                           | (IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff));
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    vlSelfRef.__PVT__proc_state_n = 0U;
                } else if ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xacU) 
                              & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                             & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                            & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU)))) {
                    vlSelfRef.__PVT__mem_reqflit_valid = 1U;
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                    vlSelfRef.__PVT__memreq_opcode 
                        = vlSelfRef.__PVT__memreq_wrcmo_opcode;
                    vlSelfRef.__PVT__proc_state_n = 
                        ((IData)(vlSelfRef.__PVT__wrcmo_to_send_cmo)
                          ? 4U : ((IData)(vlSelfRef.__PVT__origreq_wruniq_cmo)
                                   ? 3U : 0U));
                    vlSelfRef.__PVT__rden_outcompfifo 
                        = (1U & (~ ((IData)(vlSelfRef.__PVT__wrcmo_to_send_cmo) 
                                    | (IData)(vlSelfRef.__PVT__origreq_wruniq_cmo))));
                    vlSelfRef.__PVT__avoid_clearing_outstand_nxt 
                        = vlSelfRef.__PVT__origreq_wruniq_cmo;
                } else if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xadU) 
                                   | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaeU)) 
                                  & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU))))) {
                    if ((((IData)(vlSelfRef.__PVT__dat_link_crdt_avlble) 
                          & (IData)(vlSelfRef.__PVT__wrcmo_to_send_slc_data)) 
                         & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit)))) {
                        vlSelfRef.__PVT__send_dataflit = 1U;
                        vlSelfRef.__PVT__send_l3data = 1U;
                        vlSelfRef.__PVT__send_memdata = 1U;
                        vlSelfRef.__PVT__read_compbuf_all = 1U;
                        vlSelfRef.__PVT__clr_unused_compbuff_num 
                            = vlSelfRef.__PVT__wrcmo_clr_2nd_buffer;
                        vlSelfRef.__PVT__deallocate_2nd_compbuff 
                            = vlSelfRef.__PVT__wrcmo_clr_2nd_buffer;
                        vlSelfRef.__PVT__proc_state_n = 9U;
                    } else if ((((IData)(vlSelfRef.__PVT__dat_link_crdt_avlble) 
                                 & (~ (IData)(vlSelfRef.__PVT__wrcmo_to_send_slc_data))) 
                                & (~ (IData)(vlSelfRef.__PVT__snpreq_sending_datflit)))) {
                        vlSelfRef.__PVT__send_dataflit = 1U;
                        vlSelfRef.__PVT__send_memdata = 1U;
                        vlSelfRef.__PVT__read_compbuf_all = 1U;
                        vlSelfRef.__PVT__clr_unused_compbuff_num 
                            = vlSelfRef.__PVT__wrcmo_clr_2nd_buffer;
                        vlSelfRef.__PVT__deallocate_2nd_compbuff 
                            = vlSelfRef.__PVT__wrcmo_clr_2nd_buffer;
                        vlSelfRef.__PVT__proc_state_n 
                            = ((((IData)(vlSelfRef.__PVT__origreq_wrnosnp_cmo) 
                                 & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
                                & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb0U))
                                ? 8U : ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U))
                                         ? 3U : 0U));
                        vlSelfRef.__PVT__rden_outcompfifo 
                            = (1U & (~ ((((IData)(vlSelfRef.__PVT__origreq_wrnosnp_cmo) 
                                          & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
                                         & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb0U)) 
                                        | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U))));
                    }
                } else if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xafU) 
                                  | ((IData)(vlSelfRef.__PVT__origreq_write_cmo) 
                                     & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU))))) {
                    vlSelfRef.__PVT__proc_state_n = 
                        (((((IData)(vlSelfRef.__PVT__origreq_wrnosnp_cmo) 
                            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
                           & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb0U)) 
                          & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU)))
                          ? 8U : ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U) 
                                         | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU)))
                                   ? 3U : 0U));
                }
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
            if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa5U) 
                  & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                 & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)))) {
                vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                vlSelfRef.__PVT__memreq_opcode = 0x1dU;
                vlSelfRef.__PVT__proc_state_n = 5U;
            } else if (((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U) 
                         & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                        & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble))) {
                vlSelfRef.__PVT__mem_reqflit_valid = 1U;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                vlSelfRef.__PVT__memreq_opcode = (0x7fU 
                                                  & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7));
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
            } else if ((((((IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s) 
                           | (IData)(vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s)) 
                          & (~ (IData)(vlSelfRef.__PVT__wren_compbuff_rcv_dat))) 
                         & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                        & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)))) {
                vlSelfRef.__PVT__was_SEND_REQ_st_nxt = 1U;
                vlSelfRef.__PVT__send_l3data = 1U;
                vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                vlSelfRef.__PVT__drop_wr_to_slc_but_keep_wrbe = 1U;
                vlSelfRef.__PVT__memreq_opcode = 9U;
                vlSelfRef.__PVT__read_compbuf_all = 
                    (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__read_2nd_compbuff 
                    = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__merge_data = (1U & 
                                               VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__wren_compbuff_xmt_dat 
                    = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__read_compdat_reuse_en 
                    = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__proc_state_n = 9U;
            } else if (((((IData)(vlSelfRef.__PVT__orig_req_is_wr_uniqueptl_clean_s) 
                          & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                         & (~ (IData)(vlSelfRef.__PVT__wren_compbuff_rcv_dat))) 
                        & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)))) {
                vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                vlSelfRef.__PVT__memreq_opcode = ((1U 
                                                   & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                                      & (~ 
                                                         VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U))))
                                                   ? 0xaU
                                                   : 9U);
                vlSelfRef.__PVT__read_compbuf_all = 
                    (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__read_2nd_compbuff 
                    = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__merge_data = (1U & 
                                               VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__wren_compbuff_xmt_dat 
                    = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__read_compdat_reuse_en 
                    = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U));
                vlSelfRef.__PVT__proc_state_n = 3U;
                vlSelfRef.__PVT__avoid_clearing_outstand_nxt 
                    = vlSelfRef.__PVT__origreq_wruniq_cmo;
            } else if ((((IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_i) 
                         & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                        & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full)))) {
                vlSelfRef.__PVT__cc_reqflit_valid = 1U;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__memreq_to_mem_or_slc = 1U;
                vlSelfRef.__PVT__memreq_opcode = ((1U 
                                                   & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU) 
                                                       & (~ 
                                                          VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x49U))) 
                                                      | (~ 
                                                         VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb2U))))
                                                   ? 0xaU
                                                   : 9U);
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
            } else {
                vlSelfRef.__PVT__proc_state_n = 4U;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
            if ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa5U) 
                 & (IData)(vlSelfRef.__PVT__respbuff_hasroom))) {
                if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaaU) 
                            & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xabU))) 
                           & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x2eU))))) {
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    vlSelfRef.__PVT__proc_state_n = 0U;
                    vlSelfRef.__PVT__rden_outcompfifo = 1U;
                } else {
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    vlSelfRef.__PVT__proc_state_n = 3U;
                    vlSelfRef.__PVT__avoid_clearing_outstand_nxt = 1U;
                }
            } else {
                vlSelfRef.__PVT__proc_state_n = 5U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
            vlSelfRef.__PVT__proc_state_n = 1U;
            if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x71U))) {
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
                vlSelfRef.__PVT__clr_pendingq = 1U;
            } else if (vlSelfRef.__PVT__origreq_wr_cb) {
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
                vlSelfRef.__PVT__clr_pendingq = 1U;
                vlSelfRef.__PVT__clr_pendingq_prep = 0U;
            } else if (((IData)(vlSelfRef.__PVT__read_once_cln_needxfr_mem) 
                        | (IData)(vlSelfRef.__PVT__read_notsd_needxfr_mem))) {
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
                vlSelfRef.__PVT__clr_pendingq = (1U 
                                                 & (~ 
                                                    VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)));
                vlSelfRef.__PVT__clr_pendingq_prep 
                    = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U));
            } else if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9cU) 
                              & (~ ((9U == (0x7fU & 
                                            VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7))) 
                                    | (8U == (0x7fU 
                                              & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x41U, 7)))))))) {
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
            } else {
                vlSelfRef.__PVT__proc_state_n = 3U;
                vlSelfRef.__PVT__req_resp_compdata_nxt = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
            vlSelfRef.__PVT__proc_state_n = 2U;
            if (((IData)(vlSelfRef.__PVT__all4_locations_have_data) 
                 | (IData)(vlSelfRef.__PVT__flag_memwr_allbe_zero))) {
                vlSelfRef.__PVT__proc_state_n = 9U;
                vlSelfRef.__PVT__read_compbuf_all = 
                    (1U & (~ (IData)(vlSelfRef.__PVT__flag_memwr_allbe_zero)));
                vlSelfRef.__PVT__send_l3data = 1U;
                vlSelfRef.__PVT__make_be_allzero_memwr 
                    = vlSelfRef.__PVT__flag_memwr_allbe_zero;
                vlSelfRef.__PVT__flag_memwr_allbe_zero_nxt = 1U;
            }
        } else if ((8U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
            if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb0U))) {
                vlSelfRef.__PVT__proc_state_n = 8U;
                vlSelfRef.__PVT__req_resp_compdata = 1U;
                vlSelfRef.__PVT__compresp_opcode = 4U;
                if (vlSelfRef.__PVT__gnt_resp_compdata) {
                    vlSelfRef.__PVT__proc_state_n = 
                        ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U))
                          ? 3U : 0U);
                    vlSelfRef.__PVT__rden_outcompfifo 
                        = (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
            vlSelfRef.__PVT__proc_state_n = 3U;
            vlSelfRef.__PVT__req_resp_compdata = 1U;
            vlSelfRef.__PVT__outstand_already_clr_nxt = 1U;
            vlSelfRef.__PVT__compresp_opcode = ((1U 
                                                 & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U) 
                                                    | ((IData)(vlSelfRef.__PVT__origreq_write_cmo) 
                                                       & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU))))
                                                 ? 0x14U
                                                 : 4U);
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__outstand_already_clr)) 
                       & (~ (IData)(vlSelfRef.__PVT__avoid_clearing_outstand))))) {
                if (((((IData)(vlSelfRef.__PVT__origreq_wr_uniq_nonzero) 
                       | (IData)(vlSelfRef.__PVT__origreq_wr_nosnp_nonzero)) 
                      & (2U == (3U & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x36U, 2)))) 
                     & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U))) {
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                    vlSelfRef.__PVT__clr_pendingq_prep 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__clr_pendingq)));
                } else if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U) 
                                  | ((IData)(vlSelfRef.__PVT__origreq_write_cmo) 
                                     & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU))))) {
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                    vlSelfRef.__PVT__clr_pendingq_prep 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__clr_pendingq)));
                } else {
                    vlSelfRef.__PVT__clr_pendingq = 
                        (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U)));
                    vlSelfRef.__PVT__clr_pendingq_prep 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__clr_pendingq)));
                    vlSelfRef.__PVT__clr_collnreg_sending_ini_pre 
                        = (1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x76U) 
                                 & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7bU)));
                }
            }
            if (vlSelfRef.__PVT__gnt_resp_compdata) {
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
                vlSelfRef.__PVT__outstand_already_clr_nxt = 0U;
                vlSelfRef.__PVT__avoid_clearing_outstand_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__proc_state_n = 0U;
            vlSelfRef.__PVT__rden_outcompfifo = 1U;
            vlSelfRef.__PVT__clr_pendingq = 1U;
        }
    } else if ((7U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
        if (vlSelfRef.__PVT__respbuff_hasroom) {
            vlSelfRef.__PVT__allocate_respbuf = 1U;
            vlSelfRef.__PVT__rden_outcompfifo = 1U;
            vlSelfRef.__PVT__proc_state_n = 0U;
        } else {
            vlSelfRef.__PVT__proc_state_n = 7U;
        }
    } else if ((9U == (IData)(vlSelfRef.__PVT__proc_state_c))) {
        if (vlSelfRef.__PVT__l3_wrdatabuf_hasroom) {
            vlSelfRef.__PVT__l3_wrdata_valid = 1U;
            if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x79U))) {
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
                vlSelfRef.__PVT__clr_pendingq = 1U;
            } else if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x3cU) 
                               | (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x26U) 
                                  & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U)))) 
                              | (IData)(vlSelfRef.__PVT__invalidate_need_dataxfr)))) {
                if (vlSelfRef.__PVT__origreq_wr_nosnp_nonzero) {
                    if ((1U & ((~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x85U)) 
                               & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9fU))))) {
                        vlSelfRef.__PVT__proc_state_n 
                            = ((IData)(vlSelfRef.__PVT__use_early_write_response)
                                ? 6U : 3U);
                    } else if ((((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x86U) 
                                  | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x87U)) 
                                 & (2U == (3U & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x36U, 2)))) 
                                & (~ (IData)(vlSelfRef.__PVT__use_early_write_response)))) {
                        vlSelfRef.__PVT__proc_state_n = 3U;
                    } else {
                        vlSelfRef.__PVT__proc_state_n = 0U;
                        vlSelfRef.__PVT__rden_outcompfifo = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__proc_state_n = 
                        (((IData)(vlSelfRef.__PVT__origreq_wr_uniq_fl) 
                          | ((IData)(vlSelfRef.__PVT__origreq_wr_uniq_ptl) 
                             & (IData)(vlSelfRef.__PVT__lastresp_wr_uniq_ptl)))
                          ? 3U : 1U);
                }
            } else if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x25U) 
                               & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x48U))) 
                              | (IData)(vlSelfRef.__PVT__invalidate_mayneed_dataxfr)))) {
                vlSelfRef.__PVT__proc_state_n = 1U;
            } else if ((1U & (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U) 
                              | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa7U)))) {
                vlSelfRef.__PVT__rden_outcompfifo = 
                    (1U & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U)));
                vlSelfRef.__PVT__proc_state_n = ((1U 
                                                  & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U))
                                                  ? 4U
                                                  : 0U);
            } else if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xadU) 
                               | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xaeU)) 
                              & (~ VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU))))) {
                vlSelfRef.__PVT__proc_state_n = ((((IData)(vlSelfRef.__PVT__origreq_wrnosnp_cmo) 
                                                   & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
                                                  & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb0U))
                                                  ? 8U
                                                  : 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U))
                                                   ? 3U
                                                   : 0U));
                vlSelfRef.__PVT__rden_outcompfifo = 
                    (1U & (~ ((((IData)(vlSelfRef.__PVT__origreq_wrnosnp_cmo) 
                                & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
                               & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb0U)) 
                              | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb1U))));
            } else if ((((IData)(vlSelfRef.__PVT__orig_req_is_wr_backfl_clean_s) 
                         | (IData)(vlSelfRef.__PVT__orig_req_is_wr_cleanfl_clean_s)) 
                        & (IData)(vlSelfRef.__PVT__was_SEND_REQ_st))) {
                vlSelfRef.__PVT__proc_state_n = 0U;
                vlSelfRef.__PVT__rden_outcompfifo = 1U;
                vlSelfRef.__PVT__was_SEND_REQ_st_nxt = 0U;
            } else if (vlSelfRef.__PVT__flag_memwr_allbe_zero) {
                vlSelfRef.__PVT__proc_state_n = 1U;
                vlSelfRef.__PVT__flag_memwr_allbe_zero_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__proc_state_n = 9U;
        }
    }
    VL_ASSIGNSEL_WI(73,19,0x1aU, vlSelfRef.__PVT__respbody_compdata_s, 
                    VL_CONCAT_III(19,2,17, (3U & ((0x14U 
                                                   == (IData)(vlSelfRef.__PVT__compresp_opcode))
                                                   ? 
                                                  VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xb3U, 2)
                                                   : 
                                                  VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7eU, 2))), 
                                  VL_CONCAT_III(17,5,12, (IData)(vlSelfRef.__PVT__compresp_opcode), 
                                                (0xfffU 
                                                 & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xfU, 12)))));
    VL_ASSIGNSEL_WI(151,20,0x31U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    VL_CONCAT_III(20,7,13, ((IData)(vlSelfRef.__PVT__memreq_to_mem_or_slc)
                                             ? (IData)(vlSelfRef.__PVT__memreq_opcode)
                                             : 0U), 
                                  VL_CONCAT_III(13,12,1, (IData)(vlSelfRef.__PVT__returntxnid), 0U)));
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelfRef.__PVT__send_dataflit;
    VL_ASSIGNSEL_WI(680,12,0x1aU, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    (0xfffU & ((IData)(vlSelfRef.__PVT__send_memdata)
                                ? VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x55U, 12)
                                : VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xfU, 12))));
    VL_ASSIGNSEL_WI(680,11,0x26U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    (0x7ffU & VL_SEL_IIII(32, ((IData)(vlSelfRef.__PVT__send_memdata)
                                                ? 0U
                                                : VL_EXTEND_II(32,11, (IData)(vlSelfRef.__PVT__datf_homenid_attr_compdata))), 0U, 11)));
    VL_ASSIGNSEL_WI(680,2,0x35U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    (3U & VL_SEL_IIII(32, ((IData)(vlSelfRef.__PVT__send_memdata)
                                            ? 0U : 
                                           VL_EXTEND_II(32,2, 
                                                        (3U 
                                                         & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7eU, 2)))), 0U, 2)));
    VL_ASSIGNSEL_WI(680,3,0x37U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    (7U & VL_SEL_IIII(32, ((IData)(vlSelfRef.__PVT__send_memdata)
                                            ? 0U : 
                                           VL_EXTEND_II(32,3, 
                                                        (7U 
                                                         & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x1bU, 3)))), 0U, 3)));
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    (0xfffU & VL_SEL_IIII(32, ((IData)(vlSelfRef.__PVT__send_memdata)
                                                ? 0U
                                                : VL_EXTEND_II(32,12, (IData)(vlSelfRef.__PVT__comp_dbid))), 0U, 12)));
    VL_ASSIGNSEL_WI(680,11,0xfU, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    (0x7ffU & VL_SEL_IIII(12, ((IData)(vlSelfRef.__PVT__send_memdata)
                                                ? VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__memwr_origreq_src_node_id))
                                                : VL_CONCAT_III(12,9,3, 
                                                                VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__mycluster_id)), 4U)), 0U, 11)));
    VL_ASSIGNSEL_WI(680,4,0x31U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    ((IData)(vlSelfRef.__PVT__send_memdata)
                      ? (IData)(vlSelfRef.__PVT__memwr_opcode)
                      : (IData)(vlSelfRef.__PVT__comp_opcode)));
    vlSelfRef.__PVT__clr_outstand_prep = 0U;
    if (vlSelfRef.__PVT__clr_pendingq_prep) {
        VL_ASSIGNBIT_IO((0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 5)), vlSelfRef.__PVT__clr_outstand_prep);
    }
    vlSelfRef.__PVT__clr_2nd_buffer = (((((IData)(vlSelfRef.__PVT__merge_wr_ptl_data) 
                                          | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                                         & (IData)(vlSelfRef.__PVT__send_l3data)) 
                                        | (IData)(vlSelfRef.__PVT__clr_unused_compbuff_num)) 
                                       | (IData)(vlSelfRef.__PVT__clr_2nd_compbuff_num));
    vlSelfRef.__PVT__wren_compbuff_num_compdata_1st 
        = vlSelfRef.__PVT__allocate_compbuf_1st;
    vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd 
        = vlSelfRef.__PVT__allocate_compbuf_2nd;
    vlSelfRef.__PVT__allocate_compbuf = ((IData)(vlSelfRef.__PVT__allocate_compbuf_1st) 
                                         | (IData)(vlSelfRef.__PVT__allocate_compbuf_2nd));
    vlSelfRef.__PVT__clr_outstand_cmd_pre = 0U;
    if (vlSelfRef.__PVT__clr_pendingq) {
        VL_ASSIGNBIT_IO((0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 5)), vlSelfRef.__PVT__clr_outstand_cmd_pre);
    }
    vlSelfRef.__PVT__compdata_clr_outstand = vlSelfRef.__PVT__clr_pendingq;
    vlSelfRef.__PVT__ic_TX_MEM_REQFLITV = vlSelfRef.__PVT__mem_reqflit_valid;
    vlSelfRef.__PVT__slc_readnosnp_apply_dmt_compdata_out 
        = (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9aU) 
           & (((IData)(vlSelfRef.__PVT__cc_reqflit_valid) 
               & (IData)(vlSelfRef.__PVT__flittype_rdnosnp_l3)) 
              | (VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x93U) 
                 & (IData)(vlSelfRef.__PVT__mem_reqflit_valid))));
    vlSelfRef.__PVT__compdata_sending_ccreq = vlSelfRef.__PVT__cc_reqflit_valid;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (1U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (1U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (2U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (2U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (3U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (3U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (4U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (4U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (5U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (5U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (6U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (6U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (7U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (7U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (8U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (8U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (9U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (9U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0xaU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0xaU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0xbU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0xbU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0xcU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0xcU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0xdU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0xdU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0xeU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0xeU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0xfU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0xfU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x10U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x10U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x11U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x11U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x12U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x12U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x13U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x13U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x14U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x14U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x15U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x15U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x16U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x16U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x17U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x17U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x18U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x18U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x19U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x19U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x1aU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x1aU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x1bU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x1bU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x1cU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x1cU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x1dU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x1dU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x1eU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x1eU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__deallocate_1st_compbuff) 
                      & (0x1fU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))) 
                     | ((IData)(vlSelfRef.__PVT__deallocate_2nd_compbuff) 
                        & (0x1fU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))))));
    vlSelfRef.__PVT__l3_drop_wrdata_nxt = ((IData)(vlSelfRef.__PVT__send_l3data)
                                            ? (((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                                | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr)) 
                                               | (IData)(vlSelfRef.__PVT__drop_wr_to_slc_but_keep_wrbe))
                                            : (IData)(vlSelfRef.__PVT__l3_drop_wrdata_stored));
    vlSelfRef.__PVT__wren_which128 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat), 4U));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (1U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (2U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (3U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (4U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (5U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (6U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (7U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (8U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (9U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0xaU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0xbU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0xcU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0xdU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0xeU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0xfU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x10U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x11U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x12U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x13U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x14U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x15U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x16U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x17U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x18U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x19U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x1aU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x1bU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x1cU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x1dU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x1eU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_compbuff, 
                    ((IData)(vlSelfRef.__PVT__wren_compbuff_xmt_dat) 
                     & (0x1fU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (1U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (2U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (3U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (4U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (5U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (6U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (7U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (8U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (9U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xaU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xbU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xcU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xdU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xeU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xfU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x10U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x11U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x12U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x13U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x14U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x15U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x16U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x17U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x18U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x19U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1aU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1bU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1cU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1dU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1eU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__read_compbuf_datareuse_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1fU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (1U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (2U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (3U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (4U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (5U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (6U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (7U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (8U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (9U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xaU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xbU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xcU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xdU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xeU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0xfU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x10U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x11U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x12U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x13U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x14U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x15U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x16U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x17U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x18U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x19U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1aU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1bU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1cU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1dU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1eU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__read_compbuf_datareuse_2nd, 
                    ((IData)(vlSelfRef.__PVT__read_compdat_reuse_en) 
                     & (0x1fU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (1U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (2U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (3U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (4U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (5U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (6U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (7U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (8U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (9U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0xaU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0xbU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0xcU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0xdU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0xeU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0xfU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x10U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x11U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x12U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x13U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x14U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x15U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x16U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x17U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x18U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x19U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x1aU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x1bU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x1cU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x1dU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x1eU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 
                    (((IData)(vlSelfRef.__PVT__read_2nd_compbuff) 
                      | ((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
                             | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
                            | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
                           | (IData)(vlSelfRef.__PVT__merge_dataless)) 
                          | (IData)(vlSelfRef.__PVT__merge_wrcmo)) 
                         & (IData)(vlSelfRef.__PVT__read_compbuf_all))) 
                     & (0x1fU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (1U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (2U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (3U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (4U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (5U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (6U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (7U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (8U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (9U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0xaU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0xbU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0xcU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0xdU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0xeU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0xfU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x10U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x11U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x12U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x13U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x14U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x15U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x16U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x17U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x18U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x19U == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x1aU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x1bU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x1cU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x1dU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x1eU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__rden_whichcompfifo_1st, 
                    ((IData)(vlSelfRef.__PVT__read_compbuf_all) 
                     & (0x1fU == (0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5)))));
    VL_CONCAT_WIW(74,1,73, vlSelfRef.__PVT__respbody_compdata, 
                  (1U & (~ (IData)(vlSelfRef.__PVT__origreq_rdwr_nosnp))), vlSelfRef.__PVT__respbody_compdata_s);
    vlSelfRef.__PVT__consumed_crdt = ((IData)(vlSelfRef.__PVT__ic_TX_DATFLITV) 
                                      | (IData)(vlSelfRef.__PVT__snpreq_sending_datflit));
    vlSelfRef.__PVT__slc_origreq_is_read_snp_dmt_out 
        = ((IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_compdata_out) 
           & (IData)(vlSelfRef.__PVT__origreq_read_snp));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__sig_chi_crdt_recv_0.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt;
}

extern const VlWide<16>/*511:0*/ Vsig_topology_top__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__2(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<12>/*383:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<12>/*383:0*/ __Vtemp_4;
    VlWide<16>/*511:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<12>/*383:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_8;
    VlWide<12>/*383:0*/ __Vtemp_9;
    VlWide<16>/*511:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<16>/*511:0*/ __Vtemp_12;
    // Body
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, vlSelfRef.__PVT__rddata_compfifo_1st);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be 
        = vlSelfRef.__PVT__rdbe_to_compdata_1st;
    VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_1st_0, vlSelfRef.__PVT__rddata_compfifo_1st, 0U, 128);
    VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_1st_1, vlSelfRef.__PVT__rddata_compfifo_1st, 0x80U, 128);
    VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_1st_2, vlSelfRef.__PVT__rddata_compfifo_1st, 0x100U, 128);
    VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_1st_3, vlSelfRef.__PVT__rddata_compfifo_1st, 0x180U, 128);
    vlSelfRef.__PVT__rdbe_to_compdata_1st_0 = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_1st, 0U, 16));
    vlSelfRef.__PVT__rdbe_to_compdata_1st_1 = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_1st, 0x10U, 16));
    vlSelfRef.__PVT__rdbe_to_compdata_1st_2 = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_1st, 0x20U, 16));
    vlSelfRef.__PVT__rdbe_to_compdata_1st_3 = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_1st, 0x30U, 16));
    VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_2nd_0, vlSelfRef.__PVT__rddata_compfifo_2nd, 0U, 128);
    VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_2nd_1, vlSelfRef.__PVT__rddata_compfifo_2nd, 0x80U, 128);
    VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_2nd_2, vlSelfRef.__PVT__rddata_compfifo_2nd, 0x100U, 128);
    VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_2nd_3, vlSelfRef.__PVT__rddata_compfifo_2nd, 0x180U, 128);
    vlSelfRef.__PVT__rdbe_to_compdata_2nd_0 = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_2nd, 0U, 16));
    vlSelfRef.__PVT__rdbe_to_compdata_2nd_1 = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_2nd, 0x10U, 16));
    vlSelfRef.__PVT__rdbe_to_compdata_2nd_2 = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_2nd, 0x20U, 16));
    vlSelfRef.__PVT__rdbe_to_compdata_2nd_3 = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_2nd, 0x30U, 16));
    if (vlSelfRef.__PVT__swap_1st_and_2nd_compbuff) {
        VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_1st_0, vlSelfRef.__PVT__rddata_compfifo_2nd, 0U, 128);
        VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_1st_1, vlSelfRef.__PVT__rddata_compfifo_2nd, 0x80U, 128);
        VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_1st_2, vlSelfRef.__PVT__rddata_compfifo_2nd, 0x100U, 128);
        VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_1st_3, vlSelfRef.__PVT__rddata_compfifo_2nd, 0x180U, 128);
        vlSelfRef.__PVT__rdbe_to_compdata_1st_0 = (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_2nd, 0U, 16));
        vlSelfRef.__PVT__rdbe_to_compdata_1st_1 = (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_2nd, 0x10U, 16));
        vlSelfRef.__PVT__rdbe_to_compdata_1st_2 = (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_2nd, 0x20U, 16));
        vlSelfRef.__PVT__rdbe_to_compdata_1st_3 = (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_2nd, 0x30U, 16));
        VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_2nd_0, vlSelfRef.__PVT__rddata_compfifo_1st, 0U, 128);
        VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_2nd_1, vlSelfRef.__PVT__rddata_compfifo_1st, 0x80U, 128);
        VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_2nd_2, vlSelfRef.__PVT__rddata_compfifo_1st, 0x100U, 128);
        VL_SEL_WWII(128, 512, vlSelfRef.__PVT__rddata_compfifo_2nd_3, vlSelfRef.__PVT__rddata_compfifo_1st, 0x180U, 128);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd_0 = (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_1st, 0U, 16));
        vlSelfRef.__PVT__rdbe_to_compdata_2nd_1 = (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_1st, 0x10U, 16));
        vlSelfRef.__PVT__rdbe_to_compdata_2nd_2 = (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_1st, 0x20U, 16));
        vlSelfRef.__PVT__rdbe_to_compdata_2nd_3 = (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__rdbe_to_compdata_1st, 0x30U, 16));
    }
    VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_0, vlSelfRef.__PVT__rddata_compfifo_1st_0);
    vlSelfRef.__PVT__wrbe_merged_0 = vlSelfRef.__PVT__rdbe_to_compdata_1st_0;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_1, vlSelfRef.__PVT__rddata_compfifo_1st_1);
    vlSelfRef.__PVT__wrbe_merged_1 = vlSelfRef.__PVT__rdbe_to_compdata_1st_1;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_2, vlSelfRef.__PVT__rddata_compfifo_1st_2);
    vlSelfRef.__PVT__wrbe_merged_2 = vlSelfRef.__PVT__rdbe_to_compdata_1st_2;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_3, vlSelfRef.__PVT__rddata_compfifo_1st_3);
    vlSelfRef.__PVT__wrbe_merged_3 = vlSelfRef.__PVT__rdbe_to_compdata_1st_3;
    if ((((((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
              | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
             | (IData)(vlSelfRef.__PVT__merge_atom_ptldata)) 
            | (IData)(vlSelfRef.__PVT__merge_dataless)) 
           | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr)) 
          | (IData)(vlSelfRef.__PVT__merge_data)) | (IData)(vlSelfRef.__PVT__merge_wrcmo))) {
        VL_ASSIGNSEL_WI(128,16,0U, vlSelfRef.__PVT__wrdata_merged_0, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 1U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 8U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 8U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x10U, vlSelfRef.__PVT__wrdata_merged_0, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 3U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x18U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x18U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 2U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x10U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x10U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x20U, vlSelfRef.__PVT__wrdata_merged_0, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 5U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x28U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x28U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 4U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x20U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x20U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x30U, vlSelfRef.__PVT__wrdata_merged_0, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 7U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x38U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x38U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 6U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x30U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x30U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x40U, vlSelfRef.__PVT__wrdata_merged_0, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 9U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x48U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x48U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 8U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x40U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x40U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x50U, vlSelfRef.__PVT__wrdata_merged_0, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xbU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x58U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x58U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xaU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x50U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x50U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x60U, vlSelfRef.__PVT__wrdata_merged_0, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xdU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x68U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x68U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xcU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x60U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x60U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x70U, vlSelfRef.__PVT__wrdata_merged_0, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xfU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x78U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x78U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xeU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_0, 0x70U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_0, 0x70U, 8)))));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 0U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 1U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 1U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 2U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 2U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 3U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 3U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 4U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 4U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 5U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 5U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 6U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 6U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 7U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 7U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 8U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 8U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 9U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 9U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xaU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 0xaU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xbU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 0xbU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xcU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 0xcU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xdU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 0xdU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xeU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 0xeU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wrbe_merged_0, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_0), 0xfU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_0), 0xfU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNSEL_WI(128,16,0U, vlSelfRef.__PVT__wrdata_merged_1, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 1U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 8U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 8U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x10U, vlSelfRef.__PVT__wrdata_merged_1, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 3U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x18U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x18U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 2U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x10U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x10U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x20U, vlSelfRef.__PVT__wrdata_merged_1, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 5U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x28U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x28U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 4U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x20U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x20U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x30U, vlSelfRef.__PVT__wrdata_merged_1, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 7U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x38U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x38U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 6U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x30U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x30U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x40U, vlSelfRef.__PVT__wrdata_merged_1, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 9U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x48U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x48U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 8U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x40U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x40U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x50U, vlSelfRef.__PVT__wrdata_merged_1, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xbU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x58U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x58U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xaU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x50U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x50U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x60U, vlSelfRef.__PVT__wrdata_merged_1, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xdU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x68U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x68U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xcU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x60U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x60U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x70U, vlSelfRef.__PVT__wrdata_merged_1, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xfU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x78U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x78U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xeU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_1, 0x70U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_1, 0x70U, 8)))));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 0U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 1U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 1U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 2U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 2U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 3U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 3U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 4U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 4U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 5U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 5U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 6U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 6U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 7U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 7U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 8U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 8U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 9U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 9U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xaU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 0xaU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xbU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 0xbU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xcU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 0xcU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xdU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 0xdU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xeU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 0xeU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wrbe_merged_1, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_1), 0xfU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_1), 0xfU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNSEL_WI(128,16,0U, vlSelfRef.__PVT__wrdata_merged_2, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 1U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 8U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 8U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x10U, vlSelfRef.__PVT__wrdata_merged_2, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 3U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x18U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x18U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 2U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x10U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x10U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x20U, vlSelfRef.__PVT__wrdata_merged_2, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 5U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x28U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x28U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 4U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x20U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x20U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x30U, vlSelfRef.__PVT__wrdata_merged_2, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 7U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x38U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x38U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 6U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x30U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x30U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x40U, vlSelfRef.__PVT__wrdata_merged_2, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 9U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x48U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x48U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 8U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x40U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x40U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x50U, vlSelfRef.__PVT__wrdata_merged_2, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xbU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x58U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x58U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xaU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x50U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x50U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x60U, vlSelfRef.__PVT__wrdata_merged_2, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xdU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x68U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x68U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xcU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x60U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x60U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x70U, vlSelfRef.__PVT__wrdata_merged_2, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xfU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x78U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x78U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xeU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_2, 0x70U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_2, 0x70U, 8)))));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 0U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 1U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 1U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 2U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 2U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 3U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 3U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 4U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 4U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 5U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 5U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 6U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 6U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 7U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 7U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 8U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 8U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 9U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 9U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xaU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 0xaU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xbU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 0xbU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xcU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 0xcU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xdU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 0xdU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xeU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 0xeU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wrbe_merged_2, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_2), 0xfU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_2), 0xfU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNSEL_WI(128,16,0U, vlSelfRef.__PVT__wrdata_merged_3, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 1U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 8U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 8U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x10U, vlSelfRef.__PVT__wrdata_merged_3, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 3U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x18U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x18U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 2U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x10U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x10U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x20U, vlSelfRef.__PVT__wrdata_merged_3, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 5U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x28U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x28U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 4U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x20U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x20U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x30U, vlSelfRef.__PVT__wrdata_merged_3, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 7U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x38U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x38U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 6U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x30U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x30U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x40U, vlSelfRef.__PVT__wrdata_merged_3, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 9U))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x48U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x48U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 8U))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x40U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x40U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x50U, vlSelfRef.__PVT__wrdata_merged_3, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xbU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x58U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x58U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xaU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x50U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x50U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x60U, vlSelfRef.__PVT__wrdata_merged_3, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xdU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x68U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x68U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xcU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x60U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x60U, 8)))));
        VL_ASSIGNSEL_WI(128,16,0x70U, vlSelfRef.__PVT__wrdata_merged_3, 
                        VL_CONCAT_III(16,8,8, (0xffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xfU))
                                                   ? 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x78U, 8)
                                                   : 
                                                  VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x78U, 8))), 
                                      (0xffU & ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xeU))
                                                 ? 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_1st_3, 0x70U, 8)
                                                 : 
                                                VL_SEL_IWII(128, vlSelfRef.__PVT__rddata_compfifo_2nd_3, 0x70U, 8)))));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 0U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 1U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 1U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 2U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 2U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 3U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 3U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 4U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 4U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 5U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 5U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 6U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 6U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 7U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 7U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 8U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 8U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 9U) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 9U)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xaU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 0xaU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xbU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 0xbU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xcU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 0xcU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xdU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 0xdU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xeU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 0xeU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wrbe_merged_3, 
                        (1U & ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_1st_3), 0xfU) 
                                | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdbe_to_compdata_2nd_3), 0xfU)) 
                               & (~ ((IData)(vlSelfRef.__PVT__drop_write_data_to_slc) 
                                     | (IData)(vlSelfRef.__PVT__make_be_allzero_memwr))))));
    } else {
        VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_0, vlSelfRef.__PVT__rddata_compfifo_1st_0);
        vlSelfRef.__PVT__wrbe_merged_0 = vlSelfRef.__PVT__rdbe_to_compdata_1st_0;
        VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_1, vlSelfRef.__PVT__rddata_compfifo_1st_1);
        vlSelfRef.__PVT__wrbe_merged_1 = vlSelfRef.__PVT__rdbe_to_compdata_1st_1;
        VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_2, vlSelfRef.__PVT__rddata_compfifo_1st_2);
        vlSelfRef.__PVT__wrbe_merged_2 = vlSelfRef.__PVT__rdbe_to_compdata_1st_2;
        VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_3, vlSelfRef.__PVT__rddata_compfifo_1st_3);
        vlSelfRef.__PVT__wrbe_merged_3 = vlSelfRef.__PVT__rdbe_to_compdata_1st_3;
    }
    vlSelfRef.__PVT__wrbe_merged_selected = vlSelfRef.__PVT__wrbe_merged_0;
    vlSelfRef.__PVT__wrbe_merged_selected_2nd = vlSelfRef.__PVT__wrbe_merged_1;
    vlSelfRef.__PVT__wrbe_merged_selected_3rd = vlSelfRef.__PVT__wrbe_merged_2;
    vlSelfRef.__PVT__l3_wrbe_nxt = ((IData)(vlSelfRef.__PVT__send_l3data)
                                     ? VL_CONCAT_QII(64,32,32, 
                                                     VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__wrbe_merged_3), (IData)(vlSelfRef.__PVT__wrbe_merged_2)), 
                                                     VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__wrbe_merged_1), (IData)(vlSelfRef.__PVT__wrbe_merged_0)))
                                     : vlSelfRef.__PVT__l3_wrbe_stored);
    vlSelfRef.__PVT__wrbe_merged_selected_4th = vlSelfRef.__PVT__wrbe_merged_3;
    vlSelfRef.__PVT__wrbe_dataflit = VL_CONCAT_QII(64,32,32, 
                                                   VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__wrbe_merged_3), (IData)(vlSelfRef.__PVT__wrbe_merged_2)), 
                                                   VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__wrbe_merged_1), (IData)(vlSelfRef.__PVT__wrbe_merged_0)));
    VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_selected, vlSelfRef.__PVT__wrdata_merged_0);
    VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_selected_2nd, vlSelfRef.__PVT__wrdata_merged_1);
    VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_selected_3rd, vlSelfRef.__PVT__wrdata_merged_2);
    VL_CONCAT_WWW(256,128,128, __Vtemp_1, vlSelfRef.__PVT__wrdata_merged_3, vlSelfRef.__PVT__wrdata_merged_2);
    VL_CONCAT_WWW(384,256,128, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__wrdata_merged_1);
    VL_CONCAT_WWW(512,384,128, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_init, __Vtemp_2, vlSelfRef.__PVT__wrdata_merged_0);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, vlSelfRef.__PVT__wrdata_merged_3, vlSelfRef.__PVT__wrdata_merged_2);
    VL_CONCAT_WWW(384,256,128, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__wrdata_merged_1);
    VL_CONCAT_WWW(512,384,128, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__wrdata_merged_0);
    VL_COND_WIWW(512, vlSelfRef.__PVT__l3_wrdata_nxt, (IData)(vlSelfRef.__PVT__send_l3data), __Vtemp_5, vlSelfRef.__PVT__l3_wrdata_stored);
    VL_ASSIGN_W(128,vlSelfRef.__PVT__wrdata_merged_selected_4th, vlSelfRef.__PVT__wrdata_merged_3);
    VL_CONCAT_WWW(256,128,128, __Vtemp_6, vlSelfRef.__PVT__wrdata_merged_3, vlSelfRef.__PVT__wrdata_merged_2);
    VL_CONCAT_WWW(384,256,128, __Vtemp_7, __Vtemp_6, vlSelfRef.__PVT__wrdata_merged_1);
    VL_CONCAT_WWW(512,384,128, vlSelfRef.__PVT__wrdata_dataflit, __Vtemp_7, vlSelfRef.__PVT__wrdata_merged_0);
    VL_ASSIGNSEL_WQ(680,64,0x68U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU))
                      ? 0ULL : VL_CONCAT_QII(64,32,32, 
                                             VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__wrbe_merged_selected_4th), (IData)(vlSelfRef.__PVT__wrbe_merged_selected_3rd)), 
                                             VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__wrbe_merged_selected_2nd), (IData)(vlSelfRef.__PVT__wrbe_merged_selected)))));
    VL_CONCAT_WWW(256,128,128, __Vtemp_8, vlSelfRef.__PVT__wrdata_merged_selected_4th, vlSelfRef.__PVT__wrdata_merged_selected_3rd);
    VL_CONCAT_WWW(384,256,128, __Vtemp_9, __Vtemp_8, vlSelfRef.__PVT__wrdata_merged_selected_2nd);
    VL_CONCAT_WWW(512,384,128, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__wrdata_merged_selected);
    __Vtemp_11 = (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x7dU));
    VL_COND_WIWW(512, __Vtemp_12, __Vtemp_11, Vsig_topology_top__ConstPool__CONST_h93e1b771_0, __Vtemp_10);
    VL_ASSIGNSEL_WW(680,512,0xa8U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, __Vtemp_12);
}
