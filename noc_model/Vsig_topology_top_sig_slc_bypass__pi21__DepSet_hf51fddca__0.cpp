// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_slc_bypass__pi21.h"

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__0(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_initcrdt_enable_0.__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat.__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp.__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat.__PVT__cc_clk 
        = vlSelfRef.__PVT__slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req.__PVT__cc_clk 
        = vlSelfRef.__PVT__slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_initcrdt_enable_0.__PVT__clk 
        = vlSelfRef.__PVT__slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat.__PVT__clk 
        = vlSelfRef.__PVT__slc_bypass_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp.__PVT__clk 
        = vlSelfRef.__PVT__slc_bypass_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__1(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__slc_bypass_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_clk 
        = vlSelfRef.__PVT__slc_bypass_gclk;
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_he95d9d6c_0;

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__0(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    CData/*31:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_26;
    CData/*31:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_28;
    CData/*31:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    CData/*31:0*/ __Vtemp_36;
    VlWide<16>/*511:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_38;
    VlWide<16>/*511:0*/ __Vtemp_39;
    CData/*31:0*/ __Vtemp_40;
    VlWide<16>/*511:0*/ __Vtemp_41;
    CData/*31:0*/ __Vtemp_42;
    VlWide<16>/*511:0*/ __Vtemp_43;
    CData/*31:0*/ __Vtemp_44;
    VlWide<16>/*511:0*/ __Vtemp_45;
    CData/*31:0*/ __Vtemp_46;
    VlWide<16>/*511:0*/ __Vtemp_47;
    CData/*31:0*/ __Vtemp_48;
    VlWide<16>/*511:0*/ __Vtemp_49;
    CData/*31:0*/ __Vtemp_50;
    VlWide<16>/*511:0*/ __Vtemp_51;
    CData/*31:0*/ __Vtemp_52;
    VlWide<16>/*511:0*/ __Vtemp_53;
    CData/*31:0*/ __Vtemp_54;
    VlWide<16>/*511:0*/ __Vtemp_55;
    CData/*31:0*/ __Vtemp_56;
    VlWide<16>/*511:0*/ __Vtemp_57;
    CData/*31:0*/ __Vtemp_58;
    VlWide<16>/*511:0*/ __Vtemp_59;
    CData/*31:0*/ __Vtemp_60;
    VlWide<16>/*511:0*/ __Vtemp_61;
    CData/*31:0*/ __Vtemp_62;
    VlWide<16>/*511:0*/ __Vtemp_63;
    CData/*31:0*/ __Vtemp_64;
    VlWide<16>/*511:0*/ __Vtemp_65;
    CData/*31:0*/ __Vtemp_66;
    VlWide<16>/*511:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    CData/*31:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_70;
    CData/*31:0*/ __Vtemp_71;
    VlWide<5>/*159:0*/ __Vtemp_72;
    CData/*31:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_74;
    CData/*31:0*/ __Vtemp_75;
    VlWide<5>/*159:0*/ __Vtemp_76;
    CData/*31:0*/ __Vtemp_77;
    VlWide<5>/*159:0*/ __Vtemp_78;
    CData/*31:0*/ __Vtemp_79;
    VlWide<5>/*159:0*/ __Vtemp_80;
    CData/*31:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_82;
    CData/*31:0*/ __Vtemp_83;
    VlWide<5>/*159:0*/ __Vtemp_84;
    CData/*31:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_86;
    CData/*31:0*/ __Vtemp_87;
    VlWide<5>/*159:0*/ __Vtemp_88;
    CData/*31:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_90;
    CData/*31:0*/ __Vtemp_91;
    VlWide<5>/*159:0*/ __Vtemp_92;
    CData/*31:0*/ __Vtemp_93;
    VlWide<5>/*159:0*/ __Vtemp_94;
    CData/*31:0*/ __Vtemp_95;
    VlWide<5>/*159:0*/ __Vtemp_96;
    CData/*31:0*/ __Vtemp_97;
    VlWide<5>/*159:0*/ __Vtemp_98;
    CData/*31:0*/ __Vtemp_99;
    VlWide<5>/*159:0*/ __Vtemp_100;
    // Body
    vlSelfRef.__PVT__drop_wr_addr = ((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                                     & (IData)(vlSelfRef.__PVT__slc_drop_wrdata));
    vlSelfRef.__PVT__cmdproc_st_nxt = vlSelfRef.__PVT__cmdproc_st;
    vlSelfRef.__PVT__rden_reqflit_fifo = 0U;
    vlSelfRef.__PVT__allocate_rd_txnid_buff = 0U;
    vlSelfRef.__PVT__allocate_wr_addr_buff = 0U;
    vlSelfRef.__PVT__assert_memrd_req = 0U;
    vlSelfRef.__PVT__send_dbidresp = 0U;
    vlSelfRef.__PVT__send_compdbidresp = 0U;
    vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf = 0U;
    vlSelfRef.__PVT__allocate_rd_reqf_buff = 0U;
    vlSelfRef.__PVT__allocate_select_rd_reqf_pointer = 0U;
    vlSelfRef.__PVT__latch_txnid = 0U;
    vlSelfRef.__PVT__allocate_wr_zero_buff = 0U;
    vlSelfRef.__PVT__send_outstand_req_cmo = 0U;
    vlSelfRef.__PVT__assert_slc_rspvalid = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__cmdproc_st))) {
        if (((((IData)(vlSelfRef.__PVT__port_has_xmt_req_crdt) 
               & (IData)(vlSelfRef.__PVT__rdretrytxn_avail)) 
              & (~ (IData)(vlSelfRef.__PVT__assert_memwr_req))) 
             & (~ (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)))) {
            vlSelfRef.__PVT__assert_memrd_req = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        } else if ((((((IData)(vlSelfRef.__PVT__outstanding_rd_reqf_ready) 
                       & (IData)(vlSelfRef.__PVT__outstanding_rd_reqf_bit)) 
                      & (4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x3eU, 7)))) 
                     & (~ (IData)(vlSelfRef.__PVT__rd_txnid_buff_full))) 
                    & ((~ (IData)(vlSelfRef.__PVT__rdretrybuf_full)) 
                       & (~ (IData)(vlSelfRef.__PVT__rdretrytxn_avail))))) {
            vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 2U;
        } else if ((((IData)(vlSelfRef.__PVT__outstanding_rd_reqf_ready) 
                     & (IData)(vlSelfRef.__PVT__outstanding_rd_reqf_bit)) 
                    & (IData)(vlSelfRef.__PVT__outstand_req_cmo))) {
            vlSelfRef.__PVT__assert_slc_rspvalid = 1U;
            vlSelfRef.__PVT__send_outstand_req_cmo = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__empty_reqflit_fifo)))) {
            if ((((((4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                    & (~ (IData)(vlSelfRef.__PVT__rd_txnid_buff_full))) 
                   & (~ (IData)(vlSelfRef.__PVT__outstanding_wr_addr_matched))) 
                  & (~ (IData)(vlSelfRef.__PVT__rdretrybuf_full))) 
                 & (~ (IData)(vlSelfRef.__PVT__rdretrytxn_avail)))) {
                vlSelfRef.__PVT__allocate_rd_txnid_buff = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 1U;
            } else if ((((4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                         & (~ (IData)(vlSelfRef.__PVT__rd_reqf_buff_full))) 
                        & (IData)(vlSelfRef.__PVT__outstanding_wr_addr_matched))) {
                vlSelfRef.__PVT__allocate_rd_reqf_buff = 1U;
                vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
            } else if (((0U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                        & (~ (IData)(vlSelfRef.__PVT__rd_txnid_buff_full)))) {
                vlSelfRef.__PVT__allocate_rd_txnid_buff = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 1U;
            } else if ((((0x1dU == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                         | (0x1cU == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7)))) 
                        & (~ (IData)(vlSelfRef.__PVT__wr_addr_buff_full)))) {
                vlSelfRef.__PVT__allocate_wr_addr_buff = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 3U;
            } else if ((((0x44U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                         & (~ (IData)(vlSelfRef.__PVT__wr_addr_buff_full))) 
                        & (~ (IData)(vlSelfRef.__PVT__slc_wrdata_valid)))) {
                vlSelfRef.__PVT__allocate_wr_addr_buff = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 3U;
                vlSelfRef.__PVT__allocate_wr_zero_buff = 1U;
            } else if (((IData)(vlSelfRef.__PVT__req_cmo) 
                        & (~ (IData)(vlSelfRef.__PVT__outstanding_wr_addr_matched)))) {
                vlSelfRef.__PVT__assert_slc_rspvalid = 1U;
                vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
            } else if ((((IData)(vlSelfRef.__PVT__req_cmo) 
                         & (~ (IData)(vlSelfRef.__PVT__rd_reqf_buff_full))) 
                        & (IData)(vlSelfRef.__PVT__outstanding_wr_addr_matched))) {
                vlSelfRef.__PVT__allocate_rd_reqf_buff = 1U;
                vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__cmdproc_st))) {
        if ((((IData)(vlSelfRef.__PVT__port_has_xmt_req_crdt) 
              & (~ (IData)(vlSelfRef.__PVT__assert_memwr_req))) 
             & (~ (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)))) {
            vlSelfRef.__PVT__assert_memrd_req = 1U;
            vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        } else {
            vlSelfRef.__PVT__latch_txnid = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__cmdproc_st))) {
        if ((((IData)(vlSelfRef.__PVT__port_has_xmt_req_crdt) 
              & (~ (IData)(vlSelfRef.__PVT__assert_memwr_req))) 
             & (~ (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)))) {
            vlSelfRef.__PVT__allocate_select_rd_reqf_pointer = 1U;
            vlSelfRef.__PVT__assert_memrd_req = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        } else {
            vlSelfRef.__PVT__latch_txnid = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__cmdproc_st))) {
        if (vlSelfRef.__PVT__send_late_comp_resp) {
            vlSelfRef.__PVT__cmdproc_st_nxt = vlSelfRef.__PVT__cmdproc_st;
        } else {
            vlSelfRef.__PVT__send_dbidresp = (1U & 
                                              (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U)));
            vlSelfRef.__PVT__send_compdbidresp = (1U 
                                                  & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U));
            vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        }
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (1U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 1U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (2U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 2U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (3U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 3U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (4U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 4U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (5U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 5U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (6U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 6U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (7U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 7U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (8U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 8U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (9U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 9U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xaU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xbU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xcU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xdU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xeU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xfU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xfU)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_reqflit_fifo;
    vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer_nxt 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))
                    ? 0U : ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff)
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer))
                             : (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer))));
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (0U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (1U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[1U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (2U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[2U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (3U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[3U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (4U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[4U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (5U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[5U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (6U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[6U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (7U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[7U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [7U], __Vtemp_16);
    __Vtemp_17 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (8U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_18, __Vtemp_17, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[8U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [8U], __Vtemp_18);
    __Vtemp_19 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (9U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_20, __Vtemp_19, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[9U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [9U], __Vtemp_20);
    __Vtemp_21 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xaU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_22, __Vtemp_21, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xaU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xaU], __Vtemp_22);
    __Vtemp_23 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xbU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_24, __Vtemp_23, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xbU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xbU], __Vtemp_24);
    __Vtemp_25 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xcU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_26, __Vtemp_25, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xcU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xcU], __Vtemp_26);
    __Vtemp_27 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xdU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_28, __Vtemp_27, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xdU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xdU], __Vtemp_28);
    __Vtemp_29 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xeU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_30, __Vtemp_29, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xeU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xeU], __Vtemp_30);
    __Vtemp_31 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xfU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_32, __Vtemp_31, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xfU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xfU], __Vtemp_32);
    vlSelfRef.__PVT__allocate_wr_data_buff = (((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                                               & (~ (IData)(vlSelfRef.__PVT__slc_drop_wrdata))) 
                                              | (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff));
    vlSelfRef.__PVT__wren_wr_addr_buff = ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff)
                                           ? (((IData)(1U) 
                                               + (~ (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available))) 
                                              & (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available))
                                           : 0U);
    vlSelfRef.__PVT__slc_rspvalid = ((((IData)(vlSelfRef.__PVT__send_dbidresp) 
                                       | (IData)(vlSelfRef.__PVT__send_late_comp_resp)) 
                                      | (IData)(vlSelfRef.__PVT__send_compdbidresp)) 
                                     | (IData)(vlSelfRef.__PVT__assert_slc_rspvalid));
    vlSelfRef.__PVT__clr_rdretryack_bufv = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__cmdproc_st)))
                                             ? (IData)(vlSelfRef.__PVT__rd_pcredithit_select)
                                             : 0U);
    vlSelfRef.__PVT__ic_TX_REQFLITV = ((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                       | (IData)(vlSelfRef.__PVT__assert_memrd_req));
    VL_CONST_W_1X(73,vlSelfRef.__PVT__slc_rspflit_s,0x00000000);
    VL_ASSIGNSEL_WI(73,4,0U, vlSelfRef.__PVT__slc_rspflit_s, 
                    (0xfU & ((IData)(vlSelfRef.__PVT__send_outstand_req_cmo)
                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0U, 4)
                              : ((IData)(vlSelfRef.__PVT__send_late_comp_resp)
                                  ? vlSelfRef.__PVT__wr_qos_buffer
                                 [vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem]
                                  : VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(73,11,4U, vlSelfRef.__PVT__slc_rspflit_s, 
                    (0x7ffU & ((IData)(vlSelfRef.__PVT__send_outstand_req_cmo)
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 4U, 11)
                                : ((IData)(vlSelfRef.__PVT__send_late_comp_resp)
                                    ? vlSelfRef.__PVT__wr_tgtid_buffer
                                   [vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem]
                                    : VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)))));
    VL_ASSIGNSEL_WI(73,11,0xfU, vlSelfRef.__PVT__slc_rspflit_s, 0xd0U);
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__slc_rspflit_s, 
                    (0xfffU & ((IData)(vlSelfRef.__PVT__send_outstand_req_cmo)
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x1aU, 12)
                                : ((IData)(vlSelfRef.__PVT__send_late_comp_resp)
                                    ? vlSelfRef.__PVT__wr_txnid_buffer
                                   [vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem]
                                    : VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)))));
    VL_ASSIGNSEL_WI(73,5,0x26U, vlSelfRef.__PVT__slc_rspflit_s, 
                    ((IData)(vlSelfRef.__PVT__send_dbidresp)
                      ? 6U : ((((IData)(vlSelfRef.__PVT__send_outstand_req_cmo) 
                                | (IData)(vlSelfRef.__PVT__req_cmo)) 
                               | (IData)(vlSelfRef.__PVT__send_late_comp_resp))
                               ? 4U : 5U)));
    VL_ASSIGNSEL_WI(73,2,0x2bU, vlSelfRef.__PVT__slc_rspflit_s, 
                    (3U & ((IData)(vlSelfRef.__PVT__ic_RX_RSPFLITV)
                            ? VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x2bU, 2)
                            : 0U)));
    VL_ASSIGNSEL_WI(73,12,0x36U, vlSelfRef.__PVT__slc_rspflit_s, 
                    (((IData)(vlSelfRef.__PVT__send_outstand_req_cmo) 
                      | (IData)(vlSelfRef.__PVT__req_cmo))
                      ? 0U : ((IData)(vlSelfRef.__PVT__send_late_comp_resp)
                               ? VL_EXTEND_II(12,4, (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))
                               : VL_EXTEND_II(12,4, (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected)))));
    vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer_nxt 
        = (0xfU & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                     | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer)))
                    ? 0U : (((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                             | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))
                             : (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (1U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (1U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (2U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (2U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (3U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (3U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (4U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (4U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (5U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (5U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (6U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (6U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (7U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (7U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (8U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (8U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (9U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (9U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xfU)))));
    vlSelfRef.__PVT__txnid_from_cc = (0xfffU & ((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)
                                                 ? 
                                                VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x1aU, 12)
                                                 : 
                                                VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)));
    vlSelfRef.__PVT__flit_dmt_en = (1U & (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf) 
                                           | (IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer))
                                           ? VL_BITSEL_IWII(154, vlSelfRef.__PVT__outstanding_rd_reqf, 0x99U)
                                           : VL_BITSEL_IWII(154, vlSelfRef.__PVT__rddata_reqflit_fifo, 0x99U)));
    __Vtemp_33 = (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf) 
                   | (IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer)) 
                  | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo));
    VL_COND_WIWW(151, __Vtemp_34, __Vtemp_33, vlSelfRef.__PVT__outstanding_rd_reqf_s, vlSelfRef.__PVT__rddata_reqflit_fifo_s);
    __Vtemp_35 = ((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                  & (0U == (IData)(vlSelfRef.__PVT__cmdproc_st)));
    VL_COND_WIWW(151, vlSelfRef.__PVT__rd_reqf_s, __Vtemp_35, vlSelfRef.__PVT__memrdretry_cmd_s, __Vtemp_34);
    vlSelfRef.__PVT__store_wr_data_index_buffer_pointer_nxt 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? 0U : ((IData)(vlSelfRef.__PVT__allocate_wr_data_buff)
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))
                             : (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0U)))));
    __Vtemp_36 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_37, __Vtemp_36, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0U], __Vtemp_37);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (0U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [0U]);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (1U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (1U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 1U)))));
    __Vtemp_38 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (1U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_39, __Vtemp_38, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[1U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [1U], __Vtemp_39);
    vlSelfRef.__PVT__wr_be_buffer_nxt[1U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (1U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [1U]);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (2U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (2U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 2U)))));
    __Vtemp_40 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (2U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_41, __Vtemp_40, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[2U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [2U], __Vtemp_41);
    vlSelfRef.__PVT__wr_be_buffer_nxt[2U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (2U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [2U]);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (3U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (3U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 3U)))));
    __Vtemp_42 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (3U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_43, __Vtemp_42, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[3U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [3U], __Vtemp_43);
    vlSelfRef.__PVT__wr_be_buffer_nxt[3U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (3U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [3U]);
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (4U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (4U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 4U)))));
    __Vtemp_44 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (4U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_45, __Vtemp_44, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[4U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [4U], __Vtemp_45);
    vlSelfRef.__PVT__wr_be_buffer_nxt[4U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (4U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [4U]);
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (5U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (5U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 5U)))));
    __Vtemp_46 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (5U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_47, __Vtemp_46, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[5U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [5U], __Vtemp_47);
    vlSelfRef.__PVT__wr_be_buffer_nxt[5U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (5U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [5U]);
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (6U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (6U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 6U)))));
    __Vtemp_48 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (6U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_49, __Vtemp_48, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[6U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [6U], __Vtemp_49);
    vlSelfRef.__PVT__wr_be_buffer_nxt[6U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (6U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [6U]);
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (7U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (7U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 7U)))));
    __Vtemp_50 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (7U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_51, __Vtemp_50, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[7U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [7U], __Vtemp_51);
    vlSelfRef.__PVT__wr_be_buffer_nxt[7U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (7U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [7U]);
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (8U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (8U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 8U)))));
    __Vtemp_52 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (8U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_53, __Vtemp_52, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[8U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [8U], __Vtemp_53);
    vlSelfRef.__PVT__wr_be_buffer_nxt[8U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (8U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [8U]);
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (9U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (9U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 9U)))));
    __Vtemp_54 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (9U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_55, __Vtemp_54, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[9U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [9U], __Vtemp_55);
    vlSelfRef.__PVT__wr_be_buffer_nxt[9U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (9U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [9U]);
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xaU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xaU)))));
    __Vtemp_56 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xaU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_57, __Vtemp_56, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xaU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xaU], __Vtemp_57);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xaU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xaU]);
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xbU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xbU)))));
    __Vtemp_58 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xbU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_59, __Vtemp_58, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xbU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xbU], __Vtemp_59);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xbU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xbU]);
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xcU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xcU)))));
    __Vtemp_60 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xcU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_61, __Vtemp_60, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xcU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xcU], __Vtemp_61);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xcU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xcU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xcU]);
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xdU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xdU)))));
    __Vtemp_62 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xdU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_63, __Vtemp_62, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xdU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xdU], __Vtemp_63);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xdU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xdU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xdU]);
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xeU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xeU)))));
    __Vtemp_64 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xeU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_65, __Vtemp_64, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xeU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xeU], __Vtemp_65);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xeU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xeU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xeU]);
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xfU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xfU)))));
    __Vtemp_66 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xfU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_67, __Vtemp_66, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xfU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xfU], __Vtemp_67);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xfU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xfU]);
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [0U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [0U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [0U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [0U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [0U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [0U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[1U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [1U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[1U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [1U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[1U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [1U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[1U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [1U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[1U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [1U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[1U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [1U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[2U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [2U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[2U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [2U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[2U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [2U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[2U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [2U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[2U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [2U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[2U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [2U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[3U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [3U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[3U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [3U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[3U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [3U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[3U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [3U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[3U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [3U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[3U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [3U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[4U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [4U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[4U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [4U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[4U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [4U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[4U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [4U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[4U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [4U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[4U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [4U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[5U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [5U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[5U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [5U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[5U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [5U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[5U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [5U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[5U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [5U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[5U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [5U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[6U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [6U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[6U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [6U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[6U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [6U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[6U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [6U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[6U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [6U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[6U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [6U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[7U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [7U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[7U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [7U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[7U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [7U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[7U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [7U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[7U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [7U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[7U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [7U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[8U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [8U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[8U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [8U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[8U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [8U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[8U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [8U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[8U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [8U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[8U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [8U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[9U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [9U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[9U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [9U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[9U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [9U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[9U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [9U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[9U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [9U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[9U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [9U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xaU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xaU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xaU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xaU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xaU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xaU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xaU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xaU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xaU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xaU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xaU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xaU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xbU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xbU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xbU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xbU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xbU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xbU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xbU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xbU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xbU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xbU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xbU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xbU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xcU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xcU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xcU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xcU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xcU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xcU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xcU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xcU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xcU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xcU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xcU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xcU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xdU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xdU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xdU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xdU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xdU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xdU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xdU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xdU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xdU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xdU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xdU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xdU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xeU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xeU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xeU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xeU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xeU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xeU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xeU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xeU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xeU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xeU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xeU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xeU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xfU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xfU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xfU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xfU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xfU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xfU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xfU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xfU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xfU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xfU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xfU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xfU]));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 1U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 2U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 3U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 4U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 5U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 6U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 7U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 8U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 9U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xaU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xbU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xcU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xdU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xeU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xfU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xfU)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (1U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 1U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (2U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 2U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (3U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 3U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (4U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 4U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (5U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 5U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (6U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 6U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (7U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 7U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (8U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 8U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (9U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 9U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xaU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xaU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xbU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xbU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xcU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xcU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xdU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xdU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xeU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xeU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xfU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xfU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xfU)))));
    vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location 
        = vlSelfRef.__PVT__wren_wr_addr_buff;
    vlSelf->__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_clog2_addr__1__clog2_addr_temp_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5024625363832736650ull);
    vlSelf->__Vfunc_clog2_addr__1__clog2_addr_temp_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5181110451836900877ull);
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = 0U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul = 0U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 1U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 1U)));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 2U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 2U))), 1U);
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 3U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(3U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 3U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 4U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 4U))), 2U);
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 5U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(5U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 5U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 6U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(6U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 6U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 7U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(7U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 7U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 8U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 8U))), 3U);
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 9U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(9U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 9U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xaU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xaU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xaU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xbU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xbU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xbU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xcU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xcU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xcU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xdU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xdU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xdU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xeU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xeU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xeU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xfU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xfU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xfU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0x10U;
    vlSelfRef.__PVT__wr_addr_buffer_selected_nxt = vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0U] = ((((0U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 1U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (1U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 1U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[1U] = ((((1U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 2U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (2U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 2U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[2U] = ((((2U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 3U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (3U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 3U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[3U] = ((((3U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 4U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (4U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 4U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[4U] = ((((4U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 5U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (5U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 5U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[5U] = ((((5U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [5U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 6U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (6U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 6U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[6U] = ((((6U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [6U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 7U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (7U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 7U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[7U] = ((((7U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [7U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 8U;
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 8U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (8U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 8U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[8U] = ((((8U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [8U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 9U;
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 9U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (9U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 9U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[9U] = ((((9U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [9U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xaU;
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xaU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xaU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xaU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xaU] = (((
                                                   (0xaU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xaU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xbU;
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xbU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xbU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xbU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xbU] = (((
                                                   (0xbU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xbU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xcU;
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xcU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xcU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xcU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xcU] = (((
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xcU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xdU;
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xdU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xdU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xdU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xdU] = (((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xdU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xeU;
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xeU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xeU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xeU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xeU] = (((
                                                   (0xeU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xeU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xfU;
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xfU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xfU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xfU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xfU] = (((
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xfU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0x10U;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0U] = ((((0U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 1U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (1U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 1U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[1U] = ((((1U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 2U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (2U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 2U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[2U] = ((((2U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 3U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (3U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 3U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[3U] = ((((3U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 4U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (4U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 4U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[4U] = ((((4U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 5U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (5U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 5U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[5U] = ((((5U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [5U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 6U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (6U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 6U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[6U] = ((((6U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [6U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 7U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (7U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 7U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[7U] = ((((7U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [7U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 8U;
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 8U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (8U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 8U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[8U] = ((((8U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [8U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 9U;
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 9U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (9U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 9U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[9U] = ((((9U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [9U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xaU;
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xaU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xaU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xaU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xaU] = (((
                                                   (0xaU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xaU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xbU;
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xbU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xbU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xbU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xbU] = (((
                                                   (0xbU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xbU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xcU;
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xcU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xcU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xcU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xcU] = (((
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xcU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xdU;
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xdU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xdU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xdU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xdU] = (((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xdU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xeU;
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xeU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xeU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xeU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xeU] = (((
                                                   (0xeU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xeU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xfU;
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xfU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xfU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xfU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xfU] = (((
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xfU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0x10U;
    vlSelfRef.__PVT__consumed_xmt_req_crdt = vlSelfRef.__PVT__ic_TX_REQFLITV;
    vlSelfRef.__PVT__rden_pcredit_fifo = ((IData)(vlSelfRef.__PVT__ic_TX_REQFLITV) 
                                          & ((((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                                               & (IData)(vlSelfRef.__PVT__assert_memrd_req)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                                             | (IData)(vlSelfRef.__PVT__wrretrytxn_avail)));
    VL_ASSIGN_W(73,vlSelfRef.__PVT__slc_rspflit, vlSelfRef.__PVT__slc_rspflit_s);
    vlSelfRef.__PVT__wren_rd_txnid_buff = ((((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                             | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__flit_dmt_en)))
                                            ? (((IData)(1U) 
                                                + (~ (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available))) 
                                               & (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available))
                                            : 0U);
    vlSelfRef.__PVT__mem_addr_wrrd = (0xfffffffffffffULL 
                                      & ((IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)
                                          ? vlSelfRef.__PVT__wr_addr_for_tx_datf
                                          : ((IData)(vlSelfRef.__PVT__assert_memwr_req)
                                              ? vlSelfRef.__PVT__wr_mem_addr
                                              : VL_SEL_QWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x48U, 52))));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (0U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (0U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [0U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[1U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (1U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (1U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [1U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[2U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (2U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (2U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [2U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[3U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (3U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (3U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [3U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[4U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (4U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (4U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [4U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[5U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (5U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (5U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [5U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[6U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (6U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (6U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [6U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[7U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (7U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (7U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [7U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[8U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (8U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (8U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [8U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[9U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (9U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (9U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [9U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xaU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xaU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xaU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xaU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xbU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xbU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xbU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xbU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xcU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xcU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xcU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xcU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xdU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xdU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xdU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xdU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xeU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xeU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xeU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xeU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xfU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xfU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xfU])));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_xmt_req_crdt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_pcredit_fifo;
    vlSelfRef.__PVT__rd_txnid_buffer_selected_nxt = 
        ((IData)(vlSelfRef.__PVT__latch_txnid) ? (IData)(vlSelfRef.__PVT__rd_txnid_buffer_selected)
          : ([&]() {
                vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location 
                    = vlSelfRef.__PVT__wren_rd_txnid_buff;
                vlSelf->__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0;
                vlSelf->__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11426773111004419304ull);
                vlSelf->__Vfunc_clog2_txnid__0__clog2_txnid_temp_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17478754663484757976ull);
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout = 0U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul = 0U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 1U)));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 2U))), 1U);
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(3U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 3U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 4U))), 2U);
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(5U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 5U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(6U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 6U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(7U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 7U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 8U))), 3U);
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(9U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 9U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xaU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xaU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xbU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xbU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xcU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xcU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xdU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xdU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xeU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xeU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xfU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xfU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0x10U;
            }(), (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)));
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [0U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[1U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 1U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [1U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[2U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 2U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [2U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[3U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 3U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [3U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[4U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 4U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [4U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[5U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 5U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [5U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[6U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 6U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [6U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[7U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 7U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [7U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[8U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 8U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [8U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[9U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 9U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [9U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xaU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xaU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xaU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xbU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xbU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xbU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xcU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xcU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xcU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xdU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xdU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xdU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xeU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xeU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xeU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xfU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xfU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xfU]);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 1U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (1U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 2U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (2U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 3U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (3U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 4U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (4U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 5U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (5U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 6U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (6U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 7U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (7U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 8U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (8U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 9U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (9U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xaU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xbU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xcU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xdU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xeU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xfU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xfU)))));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[0U] = (0xfffffffU 
                                                   & VL_SEL_IQII(52, vlSelfRef.__PVT__mem_addr_wrrd, 0x18U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[1U] = (0xfffffffU 
                                                   & VL_SEL_IQII(52, vlSelfRef.__PVT__mem_addr_wrrd, 0x18U, 28));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [1U])));
    vlSelfRef.__PVT__tgt_pm_node_id = 0U;
    if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__tgt_pm_node_id = vlSelfRef.__PVT__xy_coord_pm
            [0U];
    }
    vlSelfRef.__PVT__tgt_map_cmb__DOT__unnamedblk13__DOT__p = 1U;
    if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__tgt_pm_node_id = vlSelfRef.__PVT__xy_coord_pm
            [1U];
    }
    vlSelfRef.__PVT__tgt_map_cmb__DOT__unnamedblk13__DOT__p = 2U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT_s, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    VL_ASSIGNSEL_WQ(680,38,0U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    VL_CONCAT_QII(38,12,26, (IData)(vlSelfRef.__PVT__wr_dbid_tx_datf), 
                                  VL_CONCAT_III(26,11,15, 
                                                VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 5U), 
                                                VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__tgt_pm_node_id), (IData)(vlSelfRef.__PVT__wr_qos_tx_datf)))));
    VL_ASSIGNSEL_WI(680,24,0x26U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 0x1800U);
    VL_ASSIGNSEL_WI(680,16,0x41U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    VL_EXTEND_II(16,14, VL_CONCAT_III(14,2,12, 
                                                      (3U 
                                                       & VL_SEL_IQII(52, vlSelfRef.__PVT__wr_addr_for_tx_datf, 4U, 2)), 0U)));
    VL_CONCAT_WQI(65,64,1, __Vtemp_68, vlSelfRef.__PVT__wr_be_tx_datf, 0U);
    VL_ASSIGNSEL_WW(680,65,0x67U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, __Vtemp_68);
    VL_ASSIGNSEL_WI(680,3,0x3eU, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 0U);
    VL_ASSIGNSEL_WI(680,22,0x51U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 0U);
    VL_ASSIGNSEL_WW(680,512,0xa8U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, vlSelfRef.__PVT__wr_data_tx_datf);
    VL_ASSIGNSEL_WI(151,30,0U, vlSelfRef.__PVT__memwr_req_s, 
                    VL_CONCAT_III(30,15,15, VL_CONCAT_III(15,4,11, (IData)(vlSelfRef.__PVT__wr_data_buffer_index), 
                                                          VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 5U)), 
                                  VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__tgt_pm_node_id), (IData)(vlSelfRef.__PVT__wr_mem_qos))));
    VL_ASSIGNSEL_WQ(151,39,0x1eU, vlSelfRef.__PVT__memwr_req_s, 
                    VL_CONCAT_QII(39,7,32, ((IData)(vlSelfRef.__PVT__is_wr_zero_req)
                                             ? 0x44U
                                             : 0x1cU), 0xcU));
    VL_ASSIGNSEL_WI(151,9,0x89U, vlSelfRef.__PVT__memwr_req_s, 0U);
    VL_ASSIGNSEL_WI(151,2,0x94U, vlSelfRef.__PVT__memwr_req_s, 0U);
    VL_ASSIGNSEL_WQ(151,57,0x45U, vlSelfRef.__PVT__memwr_req_s, 
                    VL_CONCAT_QQI(57,54,3, VL_EXTEND_QQ(54,53, 
                                                        VL_CONCAT_QIQ(53,1,52, (IData)(vlSelfRef.__PVT__wr_mem_ns), vlSelfRef.__PVT__wr_mem_addr)), 6U));
    VL_ASSIGNSEL_WI(151,7,0x7eU, vlSelfRef.__PVT__memwr_req_s, 
                    VL_CONCAT_III(7,4,3, (0xfU & ((IData)(vlSelfRef.__PVT__wrretrytxn_avail)
                                                   ? 
                                                  VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__rddata_pcredit_fifo), 0U, 4)
                                                   : 0U)), 
                                  VL_EXTEND_II(3,1, 
                                               (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))))));
    VL_ASSIGNSEL_WI(151,4,0x85U, vlSelfRef.__PVT__memwr_req_s, vlSelfRef.__PVT__wr_mem_memattr);
    VL_ASSIGNSEL_WI(151,2,0x92U, vlSelfRef.__PVT__memwr_req_s, 0U);
    VL_ASSIGNBIT_WI(0x96U, vlSelfRef.__PVT__memwr_req_s, 0U);
    VL_ASSIGNSEL_WI(151,15,0U, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__tgt_pm_node_id), 
                                  (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0U, 4))));
    VL_ASSIGNBIT_WI(0x31U, vlSelfRef.__PVT__memrd_req_s, 
                    (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x31U)));
    VL_ASSIGNSEL_WI(151,7,0x3eU, vlSelfRef.__PVT__memrd_req_s, 4U);
    VL_ASSIGNBIT_WI(0x7eU, vlSelfRef.__PVT__memrd_req_s, 
                    (1U & ((0U != (IData)(vlSelfRef.__PVT__cmdproc_st)) 
                           | (~ (IData)(vlSelfRef.__PVT__rdretrytxn_avail)))));
    VL_ASSIGNSEL_WQ(151,52,0x48U, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_QQI(52,46,6, (0x3fffffffffffULL 
                                            & VL_SEL_QWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x4eU, 46)), 0U));
    VL_ASSIGNSEL_WI(151,4,0x81U, vlSelfRef.__PVT__memrd_req_s, 
                    (0xfU & (((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                              & (0U == (IData)(vlSelfRef.__PVT__cmdproc_st)))
                              ? VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__rddata_pcredit_fifo), 0U, 4)
                              : 0U)));
    VL_ASSIGNSEL_WI(151,3,0x45U, vlSelfRef.__PVT__memrd_req_s, 6U);
    VL_ASSIGNSEL_WI(151,2,0x7cU, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x7dU)), 
                                  (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x7cU))));
    VL_ASSIGNSEL_WI(151,2,0x7fU, vlSelfRef.__PVT__memrd_req_s, 
                    (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x7fU, 2)));
    VL_ASSIGNSEL_WI(151,4,0x85U, vlSelfRef.__PVT__memrd_req_s, 
                    (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x85U, 4)));
    VL_ASSIGNSEL_WI(151,2,0x92U, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x93U)), 
                                  (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x92U))));
    VL_ASSIGNBIT_WI(0x96U, vlSelfRef.__PVT__memrd_req_s, 
                    (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x96U)));
    VL_ASSIGNSEL_WI(151,9,0x89U, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_III(9,8,1, (0xffU & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x8aU, 8)), 
                                  (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x89U))));
    VL_ASSIGNSEL_WI(151,2,0x94U, vlSelfRef.__PVT__memrd_req_s, 
                    (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x94U, 2)));
    if (vlSelfRef.__PVT__flit_dmt_en) {
        VL_ASSIGNSEL_WQ(151,34,0xfU, vlSelfRef.__PVT__memrd_req_s, 
                        VL_CONCAT_QII(34,11,23, (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x26U, 11)), 
                                      VL_CONCAT_III(23,12,11, 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x1aU, 12)), 
                                                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U))));
        VL_ASSIGNSEL_WI(151,12,0x32U, vlSelfRef.__PVT__memrd_req_s, 
                        (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x32U, 12)));
    } else {
        VL_ASSIGNSEL_WI(151,11,0xfU, vlSelfRef.__PVT__memrd_req_s, 
                        VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 5U));
        VL_ASSIGNSEL_WI(151,12,0x1aU, vlSelfRef.__PVT__memrd_req_s, 
                        (0xfffU & (((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                                    & (0U == (IData)(vlSelfRef.__PVT__cmdproc_st)))
                                    ? VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x1aU, 12)
                                    : VL_CONCAT_III(12,8,4, 8U, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_selected)))));
        VL_ASSIGNSEL_WI(151,11,0x26U, vlSelfRef.__PVT__memrd_req_s, 
                        VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 5U));
        VL_ASSIGNSEL_WI(151,12,0x32U, vlSelfRef.__PVT__memrd_req_s, 
                        (0xfffU & (((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                                    & (0U == (IData)(vlSelfRef.__PVT__cmdproc_st)))
                                    ? VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x32U, 12)
                                    : VL_CONCAT_III(12,8,4, 8U, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_selected)))));
    }
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__PVT__ic_TX_DATFLIT_s);
    __Vtemp_69 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_70, __Vtemp_69, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0U], __Vtemp_70);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 1U;
    __Vtemp_71 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (1U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_72, __Vtemp_71, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[1U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [1U], __Vtemp_72);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 2U;
    __Vtemp_73 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (2U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_74, __Vtemp_73, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[2U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [2U], __Vtemp_74);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 3U;
    __Vtemp_75 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (3U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_76, __Vtemp_75, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[3U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [3U], __Vtemp_76);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 4U;
    __Vtemp_77 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (4U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_78, __Vtemp_77, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[4U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [4U], __Vtemp_78);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 5U;
    __Vtemp_79 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (5U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_80, __Vtemp_79, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[5U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [5U], __Vtemp_80);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 6U;
    __Vtemp_81 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (6U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_82, __Vtemp_81, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[6U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [6U], __Vtemp_82);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 7U;
    __Vtemp_83 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (7U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_84, __Vtemp_83, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[7U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [7U], __Vtemp_84);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 8U;
    __Vtemp_85 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (8U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_86, __Vtemp_85, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[8U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [8U], __Vtemp_86);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 9U;
    __Vtemp_87 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (9U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_88, __Vtemp_87, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[9U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [9U], __Vtemp_88);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xaU;
    __Vtemp_89 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xaU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_90, __Vtemp_89, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xaU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xaU], __Vtemp_90);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xbU;
    __Vtemp_91 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xbU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_92, __Vtemp_91, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xbU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xbU], __Vtemp_92);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xcU;
    __Vtemp_93 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xcU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_94, __Vtemp_93, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xcU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xcU], __Vtemp_94);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xdU;
    __Vtemp_95 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xdU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_96, __Vtemp_95, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xdU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xdU], __Vtemp_96);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xeU;
    __Vtemp_97 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xeU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_98, __Vtemp_97, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xeU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xeU], __Vtemp_98);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xfU;
    __Vtemp_99 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xfU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_100, __Vtemp_99, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xfU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xfU], __Vtemp_100);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0x10U;
    VL_COND_WIWW(151, vlSelfRef.__PVT__ic_TX_REQFLIT, (IData)(vlSelfRef.__PVT__assert_memwr_req), vlSelfRef.__PVT__memwr_req_s, vlSelfRef.__PVT__memrd_req_s);
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__1(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__2(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_reqflit_fifo = vlSelfRef.__PVT__cc_reqflit_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_reqflit_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__3(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__4(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_CONCAT_WIW(154,3,151, vlSelfRef.__PVT__wrdata_reqflit_fifo, (IData)(vlSelfRef.__PVT__cc_reqflit_metadata), vlSelfRef.__PVT__cc_reqflit);
    VL_ASSIGN_W(154,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_reqflit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__1(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__empty_reqflit_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_empty;
    vlSelfRef.__PVT__slc_reqflit_fifo_full = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_full;
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rddata_reqflit_fifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_rddata);
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__PVT__rddata_reqflit_fifo, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__rddata_reqflit_fifo_s, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__req_cmo = (((0xaU == (0x7fU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                                 | (9U == (0x7fU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7)))) 
                                | (8U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__2(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__full_pcredit_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_full;
    vlSelfRef.__PVT__empty_pcredit_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_empty;
    vlSelfRef.__PVT__rddata_pcredit_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_rddata;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__4(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_init_update = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_initcrdt_enable_0.__PVT__enable_init_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__5(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__slc_bypass_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_clk 
        = vlSelfRef.__PVT__slc_bypass_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__6(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_req_crdt_available = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req.__PVT__available_credits;
    vlSelfRef.__PVT__port_has_xmt_req_crdt = (0U != (IData)(vlSelfRef.__PVT__xmt_req_crdt_available));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__7(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_dat_crdt_available = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat.__PVT__available_credits;
    vlSelfRef.__PVT__port_has_xmt_dat_crdt = (0U != (IData)(vlSelfRef.__PVT__xmt_dat_crdt_available));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__4(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__send_write_data = ((IData)(vlSelfRef.__PVT__port_has_xmt_dat_crdt) 
                                        & (0U != (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (0U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (1U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 1U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (2U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 2U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (3U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 3U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (4U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 4U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (5U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 5U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (6U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 6U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (7U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 7U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (8U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 8U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (9U == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 9U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xaU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xbU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xcU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xdU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xeU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_sent_data_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__send_write_data) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__wr_buffer_index))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xfU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_sent_data_bit), 0xfU)))));
    vlSelfRef.__PVT__rst_wr_buff = vlSelfRef.__PVT__send_write_data;
    vlSelfRef.__PVT__ic_TX_DATFLITV = ((~ (IData)(vlSelfRef.__PVT__is_wr_zero_dat)) 
                                       & (IData)(vlSelfRef.__PVT__send_write_data));
    vlSelfRef.__PVT__consumed_xmt_dat_crdt = vlSelfRef.__PVT__ic_TX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_xmt_dat_crdt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__5(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__update_rsp_crdt = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_RX_RSPFLIT_s, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp.__PVT__send_working_update 
        = vlSelfRef.__PVT__update_rsp_crdt;
    vlSelfRef.__PVT__retryack_buf_entry = VL_CONCAT_III(15,11,4, 
                                                        (0x7ffU 
                                                         & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0xfU, 11)), 
                                                        (0xfU 
                                                         & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x42U, 4)));
    vlSelfRef.__PVT__retryack_bufv_index = (0xfU & 
                                            VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x1aU, 4));
    vlSelfRef.__PVT__retryack_buf_wrrd = (3U == (3U 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x20U, 2)));
    vlSelfRef.__PVT__got_retryackresp = ((IData)(vlSelfRef.__PVT__ic_RX_RSPFLITV) 
                                         & (3U == (0x1fU 
                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5))));
    vlSelfRef.__PVT__dbid_from_slavemem = (0xfffU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x36U, 12));
    vlSelfRef.__PVT__allocate_wr_comp_buff = ((IData)(vlSelfRef.__PVT__ic_RX_RSPFLITV) 
                                              & ((5U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5))) 
                                                 | (4U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5)))));
    vlSelfRef.__PVT__allocate_wr_dbid_buff = ((IData)(vlSelfRef.__PVT__ic_RX_RSPFLITV) 
                                              & ((5U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5))) 
                                                 | (6U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5)))));
    vlSelfRef.__PVT__wrdata_pcredit_fifo = VL_CONCAT_III(15,11,4, 
                                                         (0x7ffU 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0xfU, 11)), 
                                                         (0xfU 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x42U, 4)));
    vlSelfRef.__PVT__wren_pcredit_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_RSPFLITV) 
                                          & (7U == 
                                             (0x1fU 
                                              & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5))));
    vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem 
        = (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x1aU, 4));
    vlSelfRef.__PVT__got_dbidresp = vlSelfRef.__PVT__allocate_wr_dbid_buff;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_wrdata 
        = vlSelfRef.__PVT__wrdata_pcredit_fifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_pcredit_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__7(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelfRef.__PVT__compresperr_tocc = (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x35U, 2));
    VL_SEL_WWII(512, 680, vlSelfRef.__PVT__compdata_tocc, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0xa8U, 512);
    vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf = 
        (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x1aU, 4));
    vlSelfRef.__PVT__compdata_valid = ((IData)(vlSelfRef.__PVT__ic_RX_DATFLITV) 
                                       & (4U == (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSelfRef.__PVT__update_dat_crdt = vlSelfRef.__PVT__compdata_valid;
    vlSelfRef.__PVT__rst_rd_txnid_buff = vlSelfRef.__PVT__compdata_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat.__PVT__send_working_update 
        = vlSelfRef.__PVT__update_dat_crdt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__9(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drive_xLCRDV_rsp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp.__PVT__drive_xLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__14(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drive_xLCRDV_dat = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat.__PVT__drive_xLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__17(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_reqflit_fifo = vlSelfRef.__PVT__cc_reqflit_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_reqflit_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__18(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    CData/*31:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_26;
    CData/*31:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_28;
    CData/*31:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    CData/*31:0*/ __Vtemp_36;
    VlWide<16>/*511:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_38;
    VlWide<16>/*511:0*/ __Vtemp_39;
    CData/*31:0*/ __Vtemp_40;
    VlWide<16>/*511:0*/ __Vtemp_41;
    CData/*31:0*/ __Vtemp_42;
    VlWide<16>/*511:0*/ __Vtemp_43;
    CData/*31:0*/ __Vtemp_44;
    VlWide<16>/*511:0*/ __Vtemp_45;
    CData/*31:0*/ __Vtemp_46;
    VlWide<16>/*511:0*/ __Vtemp_47;
    CData/*31:0*/ __Vtemp_48;
    VlWide<16>/*511:0*/ __Vtemp_49;
    CData/*31:0*/ __Vtemp_50;
    VlWide<16>/*511:0*/ __Vtemp_51;
    CData/*31:0*/ __Vtemp_52;
    VlWide<16>/*511:0*/ __Vtemp_53;
    CData/*31:0*/ __Vtemp_54;
    VlWide<16>/*511:0*/ __Vtemp_55;
    CData/*31:0*/ __Vtemp_56;
    VlWide<16>/*511:0*/ __Vtemp_57;
    CData/*31:0*/ __Vtemp_58;
    VlWide<16>/*511:0*/ __Vtemp_59;
    CData/*31:0*/ __Vtemp_60;
    VlWide<16>/*511:0*/ __Vtemp_61;
    CData/*31:0*/ __Vtemp_62;
    VlWide<16>/*511:0*/ __Vtemp_63;
    CData/*31:0*/ __Vtemp_64;
    VlWide<16>/*511:0*/ __Vtemp_65;
    CData/*31:0*/ __Vtemp_66;
    VlWide<16>/*511:0*/ __Vtemp_67;
    // Body
    vlSelfRef.__PVT__cmdproc_st_nxt = vlSelfRef.__PVT__cmdproc_st;
    vlSelfRef.__PVT__rden_reqflit_fifo = 0U;
    vlSelfRef.__PVT__allocate_rd_txnid_buff = 0U;
    vlSelfRef.__PVT__allocate_wr_addr_buff = 0U;
    vlSelfRef.__PVT__assert_memrd_req = 0U;
    vlSelfRef.__PVT__send_dbidresp = 0U;
    vlSelfRef.__PVT__send_compdbidresp = 0U;
    vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf = 0U;
    vlSelfRef.__PVT__allocate_rd_reqf_buff = 0U;
    vlSelfRef.__PVT__allocate_select_rd_reqf_pointer = 0U;
    vlSelfRef.__PVT__latch_txnid = 0U;
    vlSelfRef.__PVT__allocate_wr_zero_buff = 0U;
    vlSelfRef.__PVT__send_outstand_req_cmo = 0U;
    vlSelfRef.__PVT__assert_slc_rspvalid = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__cmdproc_st))) {
        if (((((IData)(vlSelfRef.__PVT__port_has_xmt_req_crdt) 
               & (IData)(vlSelfRef.__PVT__rdretrytxn_avail)) 
              & (~ (IData)(vlSelfRef.__PVT__assert_memwr_req))) 
             & (~ (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)))) {
            vlSelfRef.__PVT__assert_memrd_req = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        } else if ((((((IData)(vlSelfRef.__PVT__outstanding_rd_reqf_ready) 
                       & (IData)(vlSelfRef.__PVT__outstanding_rd_reqf_bit)) 
                      & (4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x3eU, 7)))) 
                     & (~ (IData)(vlSelfRef.__PVT__rd_txnid_buff_full))) 
                    & ((~ (IData)(vlSelfRef.__PVT__rdretrybuf_full)) 
                       & (~ (IData)(vlSelfRef.__PVT__rdretrytxn_avail))))) {
            vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 2U;
        } else if ((((IData)(vlSelfRef.__PVT__outstanding_rd_reqf_ready) 
                     & (IData)(vlSelfRef.__PVT__outstanding_rd_reqf_bit)) 
                    & (IData)(vlSelfRef.__PVT__outstand_req_cmo))) {
            vlSelfRef.__PVT__assert_slc_rspvalid = 1U;
            vlSelfRef.__PVT__send_outstand_req_cmo = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__empty_reqflit_fifo)))) {
            if ((((((4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                    & (~ (IData)(vlSelfRef.__PVT__rd_txnid_buff_full))) 
                   & (~ (IData)(vlSelfRef.__PVT__outstanding_wr_addr_matched))) 
                  & (~ (IData)(vlSelfRef.__PVT__rdretrybuf_full))) 
                 & (~ (IData)(vlSelfRef.__PVT__rdretrytxn_avail)))) {
                vlSelfRef.__PVT__allocate_rd_txnid_buff = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 1U;
            } else if ((((4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                         & (~ (IData)(vlSelfRef.__PVT__rd_reqf_buff_full))) 
                        & (IData)(vlSelfRef.__PVT__outstanding_wr_addr_matched))) {
                vlSelfRef.__PVT__allocate_rd_reqf_buff = 1U;
                vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
            } else if (((0U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                        & (~ (IData)(vlSelfRef.__PVT__rd_txnid_buff_full)))) {
                vlSelfRef.__PVT__allocate_rd_txnid_buff = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 1U;
            } else if ((((0x1dU == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                         | (0x1cU == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7)))) 
                        & (~ (IData)(vlSelfRef.__PVT__wr_addr_buff_full)))) {
                vlSelfRef.__PVT__allocate_wr_addr_buff = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 3U;
            } else if ((((0x44U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x3eU, 7))) 
                         & (~ (IData)(vlSelfRef.__PVT__wr_addr_buff_full))) 
                        & (~ (IData)(vlSelfRef.__PVT__slc_wrdata_valid)))) {
                vlSelfRef.__PVT__allocate_wr_addr_buff = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 3U;
                vlSelfRef.__PVT__allocate_wr_zero_buff = 1U;
            } else if (((IData)(vlSelfRef.__PVT__req_cmo) 
                        & (~ (IData)(vlSelfRef.__PVT__outstanding_wr_addr_matched)))) {
                vlSelfRef.__PVT__assert_slc_rspvalid = 1U;
                vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
            } else if ((((IData)(vlSelfRef.__PVT__req_cmo) 
                         & (~ (IData)(vlSelfRef.__PVT__rd_reqf_buff_full))) 
                        & (IData)(vlSelfRef.__PVT__outstanding_wr_addr_matched))) {
                vlSelfRef.__PVT__allocate_rd_reqf_buff = 1U;
                vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
                vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__cmdproc_st))) {
        if ((((IData)(vlSelfRef.__PVT__port_has_xmt_req_crdt) 
              & (~ (IData)(vlSelfRef.__PVT__assert_memwr_req))) 
             & (~ (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)))) {
            vlSelfRef.__PVT__assert_memrd_req = 1U;
            vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        } else {
            vlSelfRef.__PVT__latch_txnid = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__cmdproc_st))) {
        if ((((IData)(vlSelfRef.__PVT__port_has_xmt_req_crdt) 
              & (~ (IData)(vlSelfRef.__PVT__assert_memwr_req))) 
             & (~ (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)))) {
            vlSelfRef.__PVT__allocate_select_rd_reqf_pointer = 1U;
            vlSelfRef.__PVT__assert_memrd_req = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        } else {
            vlSelfRef.__PVT__latch_txnid = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__cmdproc_st))) {
        if (vlSelfRef.__PVT__send_late_comp_resp) {
            vlSelfRef.__PVT__cmdproc_st_nxt = vlSelfRef.__PVT__cmdproc_st;
        } else {
            vlSelfRef.__PVT__send_dbidresp = (1U & 
                                              (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U)));
            vlSelfRef.__PVT__send_compdbidresp = (1U 
                                                  & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U));
            vlSelfRef.__PVT__rden_reqflit_fifo = 1U;
            vlSelfRef.__PVT__cmdproc_st_nxt = 0U;
        }
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_reqflit_fifo;
    vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer_nxt 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))
                    ? 0U : ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff)
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer))
                             : (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer))));
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (0U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (1U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[1U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (2U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[2U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (3U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[3U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                 & (4U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[4U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (5U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[5U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (6U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[6U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (7U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[7U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [7U], __Vtemp_16);
    __Vtemp_17 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (8U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_18, __Vtemp_17, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[8U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [8U], __Vtemp_18);
    __Vtemp_19 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (9U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_20, __Vtemp_19, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[9U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [9U], __Vtemp_20);
    __Vtemp_21 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xaU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_22, __Vtemp_21, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xaU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xaU], __Vtemp_22);
    __Vtemp_23 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xbU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_24, __Vtemp_23, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xbU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xbU], __Vtemp_24);
    __Vtemp_25 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xcU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_26, __Vtemp_25, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xcU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xcU], __Vtemp_26);
    __Vtemp_27 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xdU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_28, __Vtemp_27, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xdU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xdU], __Vtemp_28);
    __Vtemp_29 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xeU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_30, __Vtemp_29, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xeU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xeU], __Vtemp_30);
    __Vtemp_31 = ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                  & (0xfU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)));
    VL_COND_WIWW(154, __Vtemp_32, __Vtemp_31, vlSelfRef.__PVT__rddata_reqflit_fifo, 
                 vlSelfRef.__PVT__rd_reqf_buffer[0xfU]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer_nxt
                [0xfU], __Vtemp_32);
    vlSelfRef.__PVT__allocate_wr_data_buff = (((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                                               & (~ (IData)(vlSelfRef.__PVT__slc_drop_wrdata))) 
                                              | (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff));
    vlSelfRef.__PVT__wren_wr_addr_buff = ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff)
                                           ? (((IData)(1U) 
                                               + (~ (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available))) 
                                              & (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available))
                                           : 0U);
    vlSelfRef.__PVT__slc_rspvalid = ((((IData)(vlSelfRef.__PVT__send_dbidresp) 
                                       | (IData)(vlSelfRef.__PVT__send_late_comp_resp)) 
                                      | (IData)(vlSelfRef.__PVT__send_compdbidresp)) 
                                     | (IData)(vlSelfRef.__PVT__assert_slc_rspvalid));
    vlSelfRef.__PVT__clr_rdretryack_bufv = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__cmdproc_st)))
                                             ? (IData)(vlSelfRef.__PVT__rd_pcredithit_select)
                                             : 0U);
    vlSelfRef.__PVT__ic_TX_REQFLITV = ((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                       | (IData)(vlSelfRef.__PVT__assert_memrd_req));
    VL_CONST_W_1X(73,vlSelfRef.__PVT__slc_rspflit_s,0x00000000);
    VL_ASSIGNSEL_WI(73,4,0U, vlSelfRef.__PVT__slc_rspflit_s, 
                    (0xfU & ((IData)(vlSelfRef.__PVT__send_outstand_req_cmo)
                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0U, 4)
                              : ((IData)(vlSelfRef.__PVT__send_late_comp_resp)
                                  ? vlSelfRef.__PVT__wr_qos_buffer
                                 [vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem]
                                  : VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(73,11,4U, vlSelfRef.__PVT__slc_rspflit_s, 
                    (0x7ffU & ((IData)(vlSelfRef.__PVT__send_outstand_req_cmo)
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 4U, 11)
                                : ((IData)(vlSelfRef.__PVT__send_late_comp_resp)
                                    ? vlSelfRef.__PVT__wr_tgtid_buffer
                                   [vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem]
                                    : VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)))));
    VL_ASSIGNSEL_WI(73,11,0xfU, vlSelfRef.__PVT__slc_rspflit_s, 0xd0U);
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__slc_rspflit_s, 
                    (0xfffU & ((IData)(vlSelfRef.__PVT__send_outstand_req_cmo)
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x1aU, 12)
                                : ((IData)(vlSelfRef.__PVT__send_late_comp_resp)
                                    ? vlSelfRef.__PVT__wr_txnid_buffer
                                   [vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem]
                                    : VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)))));
    VL_ASSIGNSEL_WI(73,5,0x26U, vlSelfRef.__PVT__slc_rspflit_s, 
                    ((IData)(vlSelfRef.__PVT__send_dbidresp)
                      ? 6U : ((((IData)(vlSelfRef.__PVT__send_outstand_req_cmo) 
                                | (IData)(vlSelfRef.__PVT__req_cmo)) 
                               | (IData)(vlSelfRef.__PVT__send_late_comp_resp))
                               ? 4U : 5U)));
    VL_ASSIGNSEL_WI(73,2,0x2bU, vlSelfRef.__PVT__slc_rspflit_s, 
                    (3U & ((IData)(vlSelfRef.__PVT__ic_RX_RSPFLITV)
                            ? VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x2bU, 2)
                            : 0U)));
    VL_ASSIGNSEL_WI(73,12,0x36U, vlSelfRef.__PVT__slc_rspflit_s, 
                    (((IData)(vlSelfRef.__PVT__send_outstand_req_cmo) 
                      | (IData)(vlSelfRef.__PVT__req_cmo))
                      ? 0U : ((IData)(vlSelfRef.__PVT__send_late_comp_resp)
                               ? VL_EXTEND_II(12,4, (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))
                               : VL_EXTEND_II(12,4, (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected)))));
    vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer_nxt 
        = (0xfU & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                     | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer)))
                    ? 0U : (((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                             | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))
                             : (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (1U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (1U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (2U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (2U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (3U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (3U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (4U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (4U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (5U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (5U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (6U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (6U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (7U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (7U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (8U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (8U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (9U == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (9U == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_rd_reqf_buff) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer)))) 
                           & ((((IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer) 
                                | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo)) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available), 0xfU)))));
    vlSelfRef.__PVT__txnid_from_cc = (0xfffU & ((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)
                                                 ? 
                                                VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x1aU, 12)
                                                 : 
                                                VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)));
    vlSelfRef.__PVT__flit_dmt_en = (1U & (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf) 
                                           | (IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer))
                                           ? VL_BITSEL_IWII(154, vlSelfRef.__PVT__outstanding_rd_reqf, 0x99U)
                                           : VL_BITSEL_IWII(154, vlSelfRef.__PVT__rddata_reqflit_fifo, 0x99U)));
    __Vtemp_33 = (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf) 
                   | (IData)(vlSelfRef.__PVT__allocate_select_rd_reqf_pointer)) 
                  | (IData)(vlSelfRef.__PVT__send_outstand_req_cmo));
    VL_COND_WIWW(151, __Vtemp_34, __Vtemp_33, vlSelfRef.__PVT__outstanding_rd_reqf_s, vlSelfRef.__PVT__rddata_reqflit_fifo_s);
    __Vtemp_35 = ((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                  & (0U == (IData)(vlSelfRef.__PVT__cmdproc_st)));
    VL_COND_WIWW(151, vlSelfRef.__PVT__rd_reqf_s, __Vtemp_35, vlSelfRef.__PVT__memrdretry_cmd_s, __Vtemp_34);
    vlSelfRef.__PVT__store_wr_data_index_buffer_pointer_nxt 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? 0U : ((IData)(vlSelfRef.__PVT__allocate_wr_data_buff)
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))
                             : (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0U)))));
    __Vtemp_36 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_37, __Vtemp_36, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0U], __Vtemp_37);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (0U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [0U]);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (1U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (1U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 1U)))));
    __Vtemp_38 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (1U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_39, __Vtemp_38, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[1U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [1U], __Vtemp_39);
    vlSelfRef.__PVT__wr_be_buffer_nxt[1U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (1U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [1U]);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (2U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (2U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 2U)))));
    __Vtemp_40 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (2U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_41, __Vtemp_40, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[2U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [2U], __Vtemp_41);
    vlSelfRef.__PVT__wr_be_buffer_nxt[2U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (2U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [2U]);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (3U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (3U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 3U)))));
    __Vtemp_42 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (3U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_43, __Vtemp_42, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[3U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [3U], __Vtemp_43);
    vlSelfRef.__PVT__wr_be_buffer_nxt[3U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (3U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [3U]);
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (4U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (4U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 4U)))));
    __Vtemp_44 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (4U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_45, __Vtemp_44, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[4U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [4U], __Vtemp_45);
    vlSelfRef.__PVT__wr_be_buffer_nxt[4U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (4U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [4U]);
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (5U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (5U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 5U)))));
    __Vtemp_46 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (5U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_47, __Vtemp_46, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[5U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [5U], __Vtemp_47);
    vlSelfRef.__PVT__wr_be_buffer_nxt[5U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (5U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [5U]);
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (6U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (6U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 6U)))));
    __Vtemp_48 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (6U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_49, __Vtemp_48, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[6U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [6U], __Vtemp_49);
    vlSelfRef.__PVT__wr_be_buffer_nxt[6U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (6U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [6U]);
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (7U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (7U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 7U)))));
    __Vtemp_50 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (7U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_51, __Vtemp_50, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[7U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [7U], __Vtemp_51);
    vlSelfRef.__PVT__wr_be_buffer_nxt[7U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (7U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [7U]);
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (8U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (8U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 8U)))));
    __Vtemp_52 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (8U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_53, __Vtemp_52, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[8U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [8U], __Vtemp_53);
    vlSelfRef.__PVT__wr_be_buffer_nxt[8U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (8U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [8U]);
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (9U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (9U == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 9U)))));
    __Vtemp_54 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (9U == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_55, __Vtemp_54, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[9U]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [9U], __Vtemp_55);
    vlSelfRef.__PVT__wr_be_buffer_nxt[9U] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                               & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                              & (9U 
                                                 == 
                                                 (0xfU 
                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                              ? vlSelfRef.__PVT__slc_be
                                              : vlSelfRef.__PVT__wr_be_buffer
                                             [9U]);
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xaU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xaU)))));
    __Vtemp_56 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xaU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_57, __Vtemp_56, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xaU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xaU], __Vtemp_57);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xaU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xaU]);
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xbU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xbU)))));
    __Vtemp_58 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xbU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_59, __Vtemp_58, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xbU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xbU], __Vtemp_59);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xbU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xbU]);
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xcU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xcU)))));
    __Vtemp_60 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xcU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_61, __Vtemp_60, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xcU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xcU], __Vtemp_61);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xcU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xcU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xcU]);
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xdU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xdU)))));
    __Vtemp_62 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xdU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_63, __Vtemp_62, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xdU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xdU], __Vtemp_63);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xdU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xdU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xdU]);
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xeU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xeU)))));
    __Vtemp_64 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xeU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_65, __Vtemp_64, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xeU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xeU], __Vtemp_65);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xeU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xeU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xeU]);
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_data_index_buffer) 
                                  & (0xfU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit), 0xfU)))));
    __Vtemp_66 = (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                   & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                  & (0xfU == (0xfU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))));
    VL_COND_WIWW(512, __Vtemp_67, __Vtemp_66, vlSelfRef.__PVT__slc_wrdata, 
                 vlSelfRef.__PVT__wr_data_buffer[0xfU]);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer_nxt
                [0xfU], __Vtemp_67);
    vlSelfRef.__PVT__wr_be_buffer_nxt[0xfU] = ((((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                                                 & (~ (IData)(vlSelfRef.__PVT__allocate_wr_zero_buff))) 
                                                & (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4))))
                                                ? vlSelfRef.__PVT__slc_be
                                                : vlSelfRef.__PVT__wr_be_buffer
                                               [0xfU]);
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [0U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [0U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [0U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [0U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [0U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [0U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[1U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [1U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[1U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [1U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[1U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [1U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[1U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [1U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[1U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [1U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[1U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [1U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[2U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [2U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[2U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [2U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[2U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [2U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[2U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [2U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[2U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [2U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[2U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [2U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[3U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [3U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[3U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [3U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[3U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [3U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[3U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [3U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[3U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [3U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[3U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [3U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[4U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [4U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[4U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [4U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[4U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [4U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[4U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [4U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[4U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [4U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[4U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [4U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[5U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [5U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[5U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [5U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[5U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [5U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[5U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [5U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[5U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [5U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[5U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [5U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[6U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [6U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[6U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [6U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[6U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [6U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[6U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [6U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[6U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [6U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[6U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [6U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[7U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [7U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[7U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [7U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[7U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [7U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[7U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [7U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[7U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [7U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[7U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [7U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[8U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [8U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[8U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [8U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[8U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [8U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[8U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [8U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[8U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [8U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[8U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [8U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[9U] = ((1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                ? VL_CONCAT_QQI(52,46,6, 
                                                                (0x3fffffffffffULL 
                                                                 & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                : vlSelfRef.__PVT__wr_addr_buffer
                                               [9U]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[9U] = (0xfU 
                                              & ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                  : 
                                                 vlSelfRef.__PVT__wr_qos_buffer
                                                 [9U]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[9U] = (0xfffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                    : 
                                                   vlSelfRef.__PVT__wr_txnid_buffer
                                                   [9U]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[9U] = (0x7ffU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                    : 
                                                   vlSelfRef.__PVT__wr_tgtid_buffer
                                                   [9U]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[9U] = (1U & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                    ? 
                                                   VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                    : 
                                                   vlSelfRef.__PVT__wr_ns_buffer
                                                   [9U]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[9U] = (0xfU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                                                      : 
                                                     vlSelfRef.__PVT__wr_memattr_buffer
                                                     [9U]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xaU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xaU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xaU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xaU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xaU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xaU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xaU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xaU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xaU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xaU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xaU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xaU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xbU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xbU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xbU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xbU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xbU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xbU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xbU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xbU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xbU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xbU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xbU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xbU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xcU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xcU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xcU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xcU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xcU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xcU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xcU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xcU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xcU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xcU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xcU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xcU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xdU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xdU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xdU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xdU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xdU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xdU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xdU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xdU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xdU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xdU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xdU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xdU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xeU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xeU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xeU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xeU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xeU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xeU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xeU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xeU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xeU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xeU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xeU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xeU]));
    vlSelfRef.__PVT__wr_addr_buffer_nxt[0xfU] = ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                  ? 
                                                 VL_CONCAT_QQI(52,46,6, 
                                                               (0x3fffffffffffULL 
                                                                & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)), 0U)
                                                  : 
                                                 vlSelfRef.__PVT__wr_addr_buffer
                                                 [0xfU]);
    vlSelfRef.__PVT__wr_qos_buffer_nxt[0xfU] = (0xfU 
                                                & ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0U, 4)
                                                    : 
                                                   vlSelfRef.__PVT__wr_qos_buffer
                                                   [0xfU]));
    vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xfU] = (0xfffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x1aU, 12)
                                                      : 
                                                     vlSelfRef.__PVT__wr_txnid_buffer
                                                     [0xfU]));
    vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xfU] = (0x7ffU 
                                                  & ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 4U, 11)
                                                      : 
                                                     vlSelfRef.__PVT__wr_tgtid_buffer
                                                     [0xfU]));
    vlSelfRef.__PVT__wr_ns_buffer_nxt[0xfU] = (1U & 
                                               ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                                                 ? 
                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x7cU)
                                                 : 
                                                vlSelfRef.__PVT__wr_ns_buffer
                                                [0xfU]));
    vlSelfRef.__PVT__wr_memattr_buffer_nxt[0xfU] = 
        (0xfU & ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))
                  ? VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x85U, 4)
                  : vlSelfRef.__PVT__wr_memattr_buffer
                 [0xfU]));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 1U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 2U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 3U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 4U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 5U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 6U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 7U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 8U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 9U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xaU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xbU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xcU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xdU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xeU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_zero_buffer_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU)) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xfU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xfU)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 1U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (1U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 1U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 2U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (2U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 2U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 3U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (3U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 3U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 4U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (4U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 4U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 5U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (5U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 5U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 6U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (6U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 6U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 7U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (7U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 7U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 8U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (8U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 8U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 9U))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (9U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 9U)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xaU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xaU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xaU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xbU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xbU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xbU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xcU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xcU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xcU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xdU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xdU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xdU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xeU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xeU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xeU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__allocate_wr_addr_buff) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_wr_addr_buff), 0xfU))) 
                           & ((((IData)(vlSelfRef.__PVT__drop_wr_addr) 
                                & (0xfU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                               | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xfU)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xfU)))));
    vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location 
        = vlSelfRef.__PVT__wren_wr_addr_buff;
    vlSelf->__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_clog2_addr__1__clog2_addr_temp_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5024625363832736650ull);
    vlSelf->__Vfunc_clog2_addr__1__clog2_addr_temp_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5181110451836900877ull);
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = 0U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul = 0U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 1U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 1U)));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 2U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 2U))), 1U);
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 3U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(3U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 3U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 4U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 4U))), 2U);
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 5U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(5U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 5U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 6U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(6U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 6U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 7U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(7U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 7U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 8U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 8U))), 3U);
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 9U;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(9U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 9U))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xaU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xaU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xaU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xbU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xbU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xbU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xcU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xcU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xcU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xdU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xdU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xdU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xeU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xeU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xeU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0xfU;
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul 
        = ((IData)(0xfU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__set_bit_location), 0xfU))));
    vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__1__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__1__unnamedblk3__DOT__i = 0x10U;
    vlSelfRef.__PVT__wr_addr_buffer_selected_nxt = vlSelfRef.__Vfunc_clog2_addr__1__Vfuncout;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0U] = ((((0U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 1U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (1U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 1U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[1U] = ((((1U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 2U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (2U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 2U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[2U] = ((((2U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 3U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (3U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 3U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[3U] = ((((3U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 4U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (4U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 4U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[4U] = ((((4U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 5U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (5U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 5U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[5U] = ((((5U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [5U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 6U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (6U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 6U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[6U] = ((((6U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [6U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 7U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (7U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 7U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[7U] = ((((7U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [7U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 8U;
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 8U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (8U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 8U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[8U] = ((((8U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [8U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 9U;
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 9U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (9U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 9U)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[9U] = ((((9U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__rdretryack_buf
                                               [9U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xaU;
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xaU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xaU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xaU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xaU] = (((
                                                   (0xaU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xaU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xbU;
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xbU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xbU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xbU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xbU] = (((
                                                   (0xbU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xbU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xcU;
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xcU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xcU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xcU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xcU] = (((
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xcU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xdU;
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xdU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xdU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xdU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xdU] = (((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xdU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xeU;
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xeU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xeU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xeU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xeU] = (((
                                                   (0xeU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xeU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0xfU;
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rdretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_rdretryack_bufv), 0xfU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xfU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xfU)))));
    vlSelfRef.__PVT__rdretryack_buf_nxt[0xfU] = (((
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__rdretryack_buf
                                                 [0xfU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__rd_i = 0x10U;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0U] = ((((0U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 1U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (1U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 1U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[1U] = ((((1U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 2U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (2U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 2U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[2U] = ((((2U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 3U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (3U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 3U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[3U] = ((((3U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 4U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (4U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 4U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[4U] = ((((4U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 5U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (5U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 5U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[5U] = ((((5U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [5U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 6U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (6U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 6U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[6U] = ((((6U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [6U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 7U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (7U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 7U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[7U] = ((((7U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [7U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 8U;
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 8U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (8U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 8U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[8U] = ((((8U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [8U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 9U;
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 9U)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (9U == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 9U)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[9U] = ((((9U 
                                                  == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                 & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                : vlSelfRef.__PVT__wrretryack_buf
                                               [9U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xaU;
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xaU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xaU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xaU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xaU] = (((
                                                   (0xaU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xaU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xbU;
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xbU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xbU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xbU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xbU] = (((
                                                   (0xbU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xbU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xcU;
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xcU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xcU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xcU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xcU] = (((
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xcU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xdU;
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xdU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xdU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xdU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xdU] = (((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xdU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xeU;
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xeU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xeU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xeU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xeU] = (((
                                                   (0xeU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xeU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0xfU;
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wrretryack_bufv_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clr_wrretryack_bufv), 0xfU)) 
                           & ((((IData)(vlSelfRef.__PVT__got_retryackresp) 
                                & (0xfU == (IData)(vlSelfRef.__PVT__retryack_bufv_index))) 
                               & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd)) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xfU)))));
    vlSelfRef.__PVT__wrretryack_buf_nxt[0xfU] = (((
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__retryack_bufv_index)) 
                                                   & (IData)(vlSelfRef.__PVT__got_retryackresp)) 
                                                  & (IData)(vlSelfRef.__PVT__retryack_buf_wrrd))
                                                  ? (IData)(vlSelfRef.__PVT__retryack_buf_entry)
                                                  : 
                                                 vlSelfRef.__PVT__wrretryack_buf
                                                 [0xfU]);
    vlSelfRef.__PVT__unnamedblk10__DOT__wr_i = 0x10U;
    vlSelfRef.__PVT__consumed_xmt_req_crdt = vlSelfRef.__PVT__ic_TX_REQFLITV;
    vlSelfRef.__PVT__rden_pcredit_fifo = ((IData)(vlSelfRef.__PVT__ic_TX_REQFLITV) 
                                          & ((((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                                               & (IData)(vlSelfRef.__PVT__assert_memrd_req)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                                             | (IData)(vlSelfRef.__PVT__wrretrytxn_avail)));
    VL_ASSIGN_W(73,vlSelfRef.__PVT__slc_rspflit, vlSelfRef.__PVT__slc_rspflit_s);
    vlSelfRef.__PVT__wren_rd_txnid_buff = ((((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                             | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__flit_dmt_en)))
                                            ? (((IData)(1U) 
                                                + (~ (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available))) 
                                               & (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available))
                                            : 0U);
    vlSelfRef.__PVT__mem_addr_wrrd = (0xfffffffffffffULL 
                                      & ((IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)
                                          ? vlSelfRef.__PVT__wr_addr_for_tx_datf
                                          : ((IData)(vlSelfRef.__PVT__assert_memwr_req)
                                              ? vlSelfRef.__PVT__wr_mem_addr
                                              : VL_SEL_QWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x48U, 52))));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (0U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (0U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [0U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[1U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (1U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (1U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [1U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[2U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (2U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (2U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [2U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[3U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (3U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (3U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [3U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[4U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (4U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (4U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [4U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[5U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (5U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (5U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [5U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[6U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (6U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (6U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [6U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[7U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (7U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (7U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [7U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[8U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (8U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (8U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [8U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[9U] = 
        (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                  & (9U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                  ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                  : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                      & (9U == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                      ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                      : vlSelfRef.__PVT__wr_data_index_buffer
                     [9U])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xaU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xaU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xaU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xaU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xbU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xbU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xbU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xbU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xcU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xcU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xcU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xcU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xdU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xdU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xdU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xdU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xeU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xeU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xeU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xeU])));
    vlSelfRef.__PVT__wr_data_index_buffer_nxt[0xfU] 
        = (0xfU & (((IData)(vlSelfRef.__PVT__allocate_wr_zero_buff) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                    ? (IData)(vlSelfRef.__PVT__wr_addr_buffer_selected_nxt)
                    : (((IData)(vlSelfRef.__PVT__allocate_wr_data_buff) 
                        & (0xfU == (IData)(vlSelfRef.__PVT__store_wr_data_index_buffer_pointer)))
                        ? VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__dbid_from_slc), 0U, 4)
                        : vlSelfRef.__PVT__wr_data_index_buffer
                       [0xfU])));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_xmt_req_crdt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_pcredit_fifo;
    vlSelfRef.__PVT__rd_txnid_buffer_selected_nxt = 
        ((IData)(vlSelfRef.__PVT__latch_txnid) ? (IData)(vlSelfRef.__PVT__rd_txnid_buffer_selected)
          : ([&]() {
                vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location 
                    = vlSelfRef.__PVT__wren_rd_txnid_buff;
                vlSelf->__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0;
                vlSelf->__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11426773111004419304ull);
                vlSelf->__Vfunc_clog2_txnid__0__clog2_txnid_temp_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17478754663484757976ull);
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout = 0U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul = 0U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 1U)));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 2U))), 1U);
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(3U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 3U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 4U))), 2U);
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(5U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 5U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(6U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 6U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(7U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 7U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 8U))), 3U);
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(9U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 9U))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xaU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xaU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xbU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xbU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xcU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xcU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xdU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xdU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xeU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xeU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul 
                    = ((IData)(0xfU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__set_bit_location), 0xfU))));
                vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__0__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__0__unnamedblk1__DOT__i = 0x10U;
            }(), (IData)(vlSelfRef.__Vfunc_clog2_txnid__0__Vfuncout)));
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [0U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[1U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 1U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [1U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[2U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 2U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [2U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[3U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 3U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [3U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[4U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 4U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [4U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[5U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 5U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [5U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[6U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 6U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [6U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[7U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 7U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [7U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[8U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 8U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [8U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[9U] = ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 9U))
                                                 ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                 : 
                                                vlSelfRef.__PVT__rd_txnid_buffer
                                                [9U]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xaU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xaU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xaU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xbU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xbU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xbU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xcU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xcU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xcU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xdU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xdU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xdU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xeU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xeU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xeU]);
    vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xfU] = ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xfU))
                                                   ? (IData)(vlSelfRef.__PVT__txnid_from_cc)
                                                   : 
                                                  vlSelfRef.__PVT__rd_txnid_buffer
                                                  [0xfU]);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 1U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (1U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 2U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (2U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 3U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (3U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 4U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (4U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 5U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (5U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 6U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (6U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 7U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (7U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 8U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (8U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 9U))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (9U == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xaU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xbU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xcU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xdU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xeU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt, 
                    (1U & ((~ (((IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff) 
                                | (IData)(vlSelfRef.__PVT__allocate_rd_txnid_buff_outstanding_reqf)) 
                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wren_rd_txnid_buff), 0xfU))) 
                           & (((IData)(vlSelfRef.__PVT__rst_rd_txnid_buff) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available), 0xfU)))));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[0U] = (0xfffffffU 
                                                   & VL_SEL_IQII(52, vlSelfRef.__PVT__mem_addr_wrrd, 0x18U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[1U] = (0xfffffffU 
                                                   & VL_SEL_IQII(52, vlSelfRef.__PVT__mem_addr_wrrd, 0x18U, 28));
}
